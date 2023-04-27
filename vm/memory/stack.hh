#ifndef STACK_HH_
#define STACK_HH_

#include <cstddef>
#include <cstdint>
#include <vector>

class Stack {
public:
    Stack(size_t min_sz, size_t max_sz);

private:
    std::vector<uint8_t> data_;
    size_t min_sz_;
    size_t max_sz_;
};

#endif //STACK_HH_
