# Vulkan Synchronization Model

The general idea behind the Vulkan module is to allow clients to render to a VkImage backed by external memory shared with the server, which the server then copies onto the real runtime-provided swapchain images. Unfortunately, it is impossible for clients to render directly (zero-copy) to the real runtime-provided images because they are provided only as opaque VkImage handles, with no way to control the memory allocation or get a handle to export to the client.

## Swapchain Creation

When a client requests to create a swapchain, that request is forwarded verbatim to the server, which has the runtime create a real swapchain. It then creates its own "shared swapchain" made of images with the same creation parameters, and the same number of images. It shares these images with the client, which imports them and exposes them to the application as actual swapchain images.

## Swapchain Synchronization

In addition to sharing the memory for the swapchain images, two semaphores are shared for each image: rendering_done, and copying_done.

Below is an illustration of the rendering flow and how these semaphores are used for synchronization.

- Application calls xrAcquireSwapchainImage (first time only returns an index)
- Application calls xrWaitSwapchainImage (first time returns immediately)
- Application submits render commands to the queue
- Application calls xrReleaseSwapchainImage
- Client enqueues command buffer:
  - Image memory barrier that transitions image layout to TRANSFER_SRC_OPTIMAL and releases ownership to QUEUE_FAMILY_EXTERNAL.
  - Signal rendering_done semaphore
- Client sends MSG_VULKAN2_RELEASE_SWAPCHAIN_IMAGE to server
- Server calls xrAcquireSwapchainImage to get destination image
- Server records command buffer:
  - Wait on rendering_done semaphore
  - Image memory barrier that acquires ownership of the shared image from QUEUE_FAMILY_EXTERNAL (does not change layout)
  - Image memory barrier that transitions the destination image to TRANSFER_DST_OPTIMAL
  - TODO: Need to find out if I need to add an execution barrier here to make sure the memory barriers happen before the copy.
  - CmdCopyImage from the shared image into the destination image
  - Image memory barrier that transitions the destination image back to COLOR_ATTACHMENT_OPTIMAL or DEPTH_STENCIL_ATTACHMENT_OPTIMAL
  - Signal copying_done semaphore
- Server calls xrWaitSwapchainImage
- Server enqueues previously recorded command buffer
- Server calls xrReleaseSwapchainImage and sends return message to client
  - This server-client sync point is necessary because all xrReleaseSwapchainImage calls on the server need to complete before xrEndFrame is called.
- Application calls xrEndFrame which is handled via default generated RPC call
- Application calls xrAcquireSwapchainImage again, and client enqueues a command buffer:
  - Wait on copying_done semaphore
  - Image memory barrier that transitions the shared image from UNDEFINED (don't care about the old contents) to COLOR_ATTACHMENT_OPTIMAL or DEPTH_STENCIL_ATTACHMENT_OPTIMAL. Note that we don't re-acquire ownership from QUEUE_FAMILY_EXTERNAL because the spec says we should only do this if we care about keeping the contents.
  - Signal a per-image fence
- Application calls xrWaitSwapchainImage
  - Client waits on fence mentioned in prior step

The extra work in xrAcquireSwapchainImage on the client is necessary because xrAcquireSwapchainImage and xrReleaseSwapchainImage are the only times the runtime is allowed to access the VkQueue. We have to transition the layout back to COLOR_ATTACHMENT_OPTIMAL or DEPTH_STENCIL_ATTACHMENT_OPTIMAL before the application uses it, and we can't do it in xrWaitSwapchainImage.

Note that the reason that using the generated RPC for xrEndFrame works is because the client maintains identical XrSession and XrSwapchain handles as the server, and the xrReleaseSwapchainImage calls line up 1:1 between the client and the server.