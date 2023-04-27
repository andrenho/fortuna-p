#include "stack.hh"

Stack::Stack(size_t min_sz, size_t max_sz)
    : min_sz_(min_sz), max_sz_(max_sz)
{
    data_.reserve(min_sz);
}
