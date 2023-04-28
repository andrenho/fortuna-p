#ifndef TYPE_HH_
#define TYPE_HH_

#include <cstdint>

#define LIMIT_MAX_TINY_INT (0b1111)
#define LIMIT_MIN_TINY_INT (-LIMIT_MAX_TINY_INT + 1)
#define LIMIT_MAX_SMALL_INT (0b111111111111)
#define LIMIT_MIN_SMALL_INT (-LIMIT_MAX_SMALL_INT + 1)
#define LIMIT_MAX_INT       (0b11111111111111111111)
#define LIMIT_MIN_INT       (-LIMIT_MAX_INT + 1)

#define MASK_TINY_INT  0b00000000
#define MASK_SMALL_INT 0b00010000
#define MASK_INT       0b00100000
#define MASK_LARGE_INT 0b00110000

/*

Types are defined as:

0000.VVVV                                         : number (between -7 and 8)
0001.VVVV VVVV.VVVV                               : number (between -2,078 and 2,048)
0010.VVVV VVVV.VVVV VVVV.VVVV                     : number (between -524,287 and 528,288)
0011.0000 VVVV.VVVV VVVV.VVVV VVVV.VVVV VVVV.VVVV : number (< -524,287 or > 528,288)

0100.0000 VVVV.VVVV                               : byte
0101.0000 VVVV.VVVV VVVV.VVVV VVVV.VVVV           : byte array
0110.0000 VVVV.VVVV VVVV.VVVV VVVV.VVVV           : array
0111.0000 VVVV.VVVV VVVV.VVVV VVVV.VVVV           : map
1000.0000 VVVV.VVVV VVVV.VVVV VVVV.VVVV           : address
1001.0000 VVVV.VVVV VVVV.VVVV VVVV.VVVV VVVV.VVVV : float

 */

#endif