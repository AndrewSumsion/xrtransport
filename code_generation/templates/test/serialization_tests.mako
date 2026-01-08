<%namespace name="utils" file="utils.mako"/>\
#include <catch2/catch_test_macros.hpp>

#include "xrtransport/serialization/serializer.h"
#include "xrtransport/serialization/deserializer.h"
#include "xrtransport/asio_compat.h"

#include <cassert>
#include <cstring>
#include <vector>

using namespace xrtransport;

// ASIO-compatible stream buffer for testing
// Effectively a simple dynamic-size FIFO queue
class TestStreamBuffer : public SyncDuplexStream {
private:
    std::vector<char> buffer_;
    std::size_t read_pos_ = 0;
    bool non_blocking_ = false;

public:
    TestStreamBuffer() = default;

    // Stream interface
    void close() override {
        // No-op for test buffer
    }

    void close(asio::error_code& ec) override {
        ec.clear();
        // No-op for test buffer
    }

    // SyncReadStream interface
    std::size_t read_some(const asio::mutable_buffer& buffers) override {
        asio::error_code ec;
        return read_some(buffers, ec);
    }

    std::size_t read_some(const asio::mutable_buffer& buffers, asio::error_code& ec) override {
        ec.clear();

        char* data = static_cast<char*>(buffers.data());
        std::size_t size = buffers.size();

        std::size_t available = buffer_.size() - read_pos_;
        std::size_t to_read = std::min(size, available);

        if (to_read > 0) {
            std::copy(buffer_.begin() + read_pos_,
                     buffer_.begin() + read_pos_ + to_read,
                     data);
            read_pos_ += to_read;
        }

        return to_read;
    }

    // SyncWriteStream interface
    std::size_t write_some(const asio::const_buffer& buffers) override {
        asio::error_code ec;
        return write_some(buffers, ec);
    }

    std::size_t write_some(const asio::const_buffer& buffers, asio::error_code& ec) override {
        ec.clear();

        const char* data = static_cast<const char*>(buffers.data());
        std::size_t size = buffers.size();

        buffer_.insert(buffer_.end(), data, data + size);
        return size;
    }

    // Helper methods for testing
    void reset_read() {
        read_pos_ = 0;
    }

    void clear() {
        buffer_.clear();
        read_pos_ = 0;
    }

    std::size_t size() const {
        return buffer_.size();
    }
};

TEST_CASE("Serialization round-trip test", "[serialization]") {
    //
    // Struct initialization
    //
<% plans = [struct_generator.generate_plan() for _ in range(250)] %>\
% for i, plan in enumerate(plans):
${struct_generator.init_struct(plan, f"item{i}", "    ")}
% endfor

    //
    // Serialize all structs
    //
    TestStreamBuffer buffer;
    SerializeContext s_ctx(buffer);

% for i, plan in enumerate(plans):
    serialize(&item${i}, s_ctx);
% endfor

    //
    // Deserialize all structs
    //
    buffer.reset_read();
    DeserializeContext d_ctx(buffer);

% for i, plan in enumerate(plans):
    ${plan.type_name} new_item${i}{};
    deserialize(&new_item${i}, d_ctx);
% endfor

    //
    // Struct comparison
    //
% for i, plan in enumerate(plans):
${struct_generator.compare_struct(plan, f"new_item{i}", "    ")}
% endfor

    //
    // Cleanup deserialized structs
    //
% for i, plan in enumerate(plans):
    cleanup(&new_item${i});
% endfor
}

TEST_CASE("In-place deserialization round-trip test", "[serialization][in-place]") {
    //
    // Struct initialization
    //
% for i, plan in enumerate(plans):
${struct_generator.init_struct(plan, f"item{i}", "    ")}
% endfor

    //
    // Serialize all structs
    //
    TestStreamBuffer buffer;
    SerializeContext s_ctx(buffer);

% for i, plan in enumerate(plans):
    serialize(&item${i}, s_ctx);
% endfor

    //
    // Zero out existing structs
    //
% for i, plan in enumerate(plans):
${struct_generator.zero_struct(plan, f"item{i}", "    ")}
% endfor

    //
    // Deserialize all structs in-place
    //
    buffer.reset_read();
    DeserializeContext d_ctx(buffer, true, 0);

% for i, plan in enumerate(plans):
    deserialize(&item${i}, d_ctx);
% endfor

    //
    // Struct comparison
    //
% for i, plan in enumerate(plans):
${struct_generator.compare_struct(plan, f"item{i}", "    ")}
% endfor
}