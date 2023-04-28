#ifndef VM_OPCODE_HH_
#define VM_OPCODE_HH_

#include <cstdint>

enum VM_Op : uint8_t {
    F_PUSHINT = 0x00,
    F_ADD     = 0x01,
};


#endif