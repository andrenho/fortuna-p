#include "process.hh"

Process::Process(const uint8_t *code_array, size_t code_sz, size_t min_stack_sz, size_t max_stack_sz)
    : code(code_array, code_array + code_sz),
      stack(min_stack_sz, max_stack_sz)
{
}
