#include "stack.hh"

#include "type.hh"
#include "../vm/vmexception.hh"

Stack::Stack(size_t min_sz, size_t max_sz)
    : min_sz_(min_sz), max_sz_(max_sz)
{
    stack_.reserve(min_sz);
}

size_t Stack::push_raw_int(uint8_t *data)
{
    uint8_t masked = data[0] & 0b11110000;
    if (masked == MASK_TINY_INT) {
        stack_.push_back(data[0]);
        return 1;
    } else if (masked == MASK_SMALL_INT) {
        stack_.insert(stack_.end(), data, data + 2);
        return 2;
    } else if (masked == MASK_INT) {
        stack_.insert(stack_.end(), data, data + 3);
        return 3;
    } else if (masked == MASK_LARGE_INT) {
        stack_.insert(stack_.end(), data, data + 5);
        return 5;
    } else {
        throw VMException(F_ERR_INVALID_INT);
    }
}