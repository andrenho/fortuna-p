#include "type.hh"
#include "../vm/vmexception.hh"

std::pair<int32_t, size_t> extract_int(uint8_t* arr)
{
    if (arr[0] & MASK_TINY_INT) {
        int8_t v = arr[0] & 0b111;
        arr[0] |= (arr[0] << 4);
        return { v, 1 };
    } else if (arr[0] & MASK_SMALL_INT) {
        throw NotImplementedException(); // TODO
    } else if (arr[0] & MASK_INT) {
        throw NotImplementedException(); // TODO
    } else if (arr[0] & MASK_LARGE_INT) {
        throw NotImplementedException(); // TODO
    } else {
        throw VMException(F_ERR_INVALID_INT);
}
