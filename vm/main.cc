#include <cstdio>
#include <vector>
#include "vm/vm.hh"
#include "debugger/debugger.hh"

#ifdef PICO_DEFAULT_BOARD
#  include "pico/stdlib.h"
#endif

int main() {
#ifdef PICO_DEFAULT_BOARD
    stdio_init_all();
#endif

    VM vm(std::vector<uint8_t> { 0 });
    Debugger debugger(vm);
    debugger.run();

    return 0;
}