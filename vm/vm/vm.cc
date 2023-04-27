#include "vm.hh"

#include "../config.hh"

VM::VM(uint8_t const *os_code, size_t os_code_sz)
{
    processes_.emplace_back( os_code, os_code_sz, FORTUNAP_MIN_STACK, FORTUNAP_MAX_STACK );
}

VM::VM(std::vector<uint8_t> code)
    : VM(code.data(), code.size())
{
}
