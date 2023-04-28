#ifndef STACK_HH_
#define STACK_HH_

#include <cstddef>
#include <cstdint>
#include <vector>

class Stack {
public:
    Stack(size_t min_sz, size_t max_sz);

    size_t push_raw_int(uint8_t* data);

    int32_t pop_int();

    [[nodiscard]] std::vector<uint8_t> const& stack() const { return stack_; }

private:
    std::vector<uint8_t> stack_;
    size_t min_sz_;
    size_t max_sz_;
};

#endif //STACK_HH_
