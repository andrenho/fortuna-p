#include <cstdio>
#include <vector>
#include "vm/vm.hh"
#include "debugger/debugger.hh"
#include "vm/vm_opcode.hh"

#ifdef PICO
#  include "pico/stdlib.h"
#endif

int main() {
#ifdef PICO
    stdio_init_all();
#endif

    VM vm(std::vector<uint8_t> {
        F_PUSHINT, 4,
        F_PUSHINT, 3
    });

    Debugger debugger(vm);
    debugger.run();

    return 0;
}
