#include "vm.hh"

#include "vm_opcode.hh"

VM::VM(uint8_t const *os_code, size_t os_code_sz)
{
    processes_.emplace_back( os_code, os_code_sz, FORTUNAP_MIN_STACK, FORTUNAP_MAX_STACK );
}

VM::VM(std::vector<uint8_t> code)
    : VM(code.data(), code.size())
{
}

void VM::step()
{
    Process& process = processes_.at(current_process_);

    switch (static_cast<VM_Op>(process.code.at(process.pc))) {
        case F_PUSHINT:
            process.pc += process.stack.push_raw_int(&(*(process.code.begin() + (++process.pc))));
            break;
    }
}
