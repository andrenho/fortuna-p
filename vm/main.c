#include <stdio.h>
#ifdef PICO_DEFAULT_BOARD
#  include "pico/stdlib.h"
#endif

int main() {
#ifdef PICO_DEFAULT_BOARD
    stdio_init_all();
#endif
    while (1) {
        printf("Hello world %d!\n", 3);
#ifdef PICO_DEFAULT_BOARD
        sleep_ms(1000);
#endif
    }
    return 0;
}
