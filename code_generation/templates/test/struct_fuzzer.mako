#include "xrtransport/serializer.h"
#include "xrtransport/deserializer.h"

#include <cassert>
#include <cstring>
#include <iostream>
#include <vector>

using namespace xrtransport;

// Used to buffer serializer outputs then read them to deserialize
// Effectively a simple dynamic-size FIFO queue
class ByteStreamBuffer : public std::streambuf {
public:
    ByteStreamBuffer() {
        setp(nullptr, nullptr); // Disable the write buffer initially
    }

    // Write single byte
    int_type overflow(int_type ch) override {
        if (ch != EOF) {
            buffer.push_back(static_cast<char>(ch));
        }
        return ch;
    }

    // Write a block of bytes
    std::streamsize xsputn(const char* s, std::streamsize count) override {
        buffer.insert(buffer.end(), s, s + count);
        return count;
    }

    // Read single byte
    int_type underflow() override {
        if (read_pos >= buffer.size()) {
            return traits_type::eof();
        }
        return traits_type::to_int_type(buffer[read_pos]);
    }

    int_type uflow() override {
        if (read_pos >= buffer.size()) {
            return traits_type::eof();
        }
        return traits_type::to_int_type(buffer[read_pos++]);
    }

    std::streamsize xsgetn(char* s, std::streamsize count) override {
        std::streamsize n = std::min(count, static_cast<std::streamsize>(buffer.size() - read_pos));
        std::copy(buffer.begin() + read_pos, buffer.begin() + read_pos + n, s);
        read_pos += n;
        return n;
    }

    // Reset reading pointer to beginning
    void reset_read() {
        read_pos = 0;
    }

    // Clear everything
    void clear() {
        buffer.clear();
        read_pos = 0;
    }

    std::size_t size() const {
        return buffer.size();
    }

private:
    std::vector<char> buffer;
    std::size_t read_pos = 0;
};

int main() {
    //
    // Struct initialization
    //
<% plans = [struct_generator.generate_plan() for _ in range(1000)] %>
% for i, plan in enumerate(plans):
${struct_generator.init_struct(plan, f"item{i}", "    ")}
% endfor

    //
    // Serialize all structs
    //
    ByteStreamBuffer buffer;
    std::ostream out(&buffer);

% for i, plan in enumerate(plans):
    serialize(&item${i}, out);
% endfor

    //
    // Deserialize all structs
    //
    buffer.reset_read();
    std::istream in(&buffer);

% for i, plan in enumerate(plans):
    ${plan.type_name} new_item${i}{};
    deserialize(&new_item${i}, in);
% endfor

    //
    // Struct comparison
    //
% for i, plan in enumerate(plans):
${struct_generator.compare_struct(plan, f"new_item{i}", "    ")}
% endfor

    std::cout << "Fuzzer passed" << std::endl;

    return 0;
}