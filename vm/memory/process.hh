#ifndef PROCESS_HH_
#define PROCESS_HH_

#include <vector>
#include <cstdint>
#include "stack.hh"

struct Process {
    Process(uint8_t const* code_array, size_t code_sz, size_t min_stack_sz, size_t max_stack_sz);

    std::vector<uint8_t> code;
    Stack stack;

    uint32_t pc = 0;
};

#endif //PROCESS_HH_
