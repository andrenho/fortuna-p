#include <vector>
#include <cstdio>
#ifdef PICO_DEFAULT_BOARD
#  include "pico/stdlib.h"
#endif

int main() {
    std::vector<int> v { 1, 2, 3 };

#ifdef PICO_DEFAULT_BOARD
    stdio_init_all();
#endif
    while (true) {
        printf("Hello world %d!\n", v.at(2));
#ifdef PICO_DEFAULT_BOARD
        sleep_ms(1000);
#endif
    }
    return 0;
}
