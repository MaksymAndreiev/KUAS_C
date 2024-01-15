//
// Created by Maksym Andreiev on 23.10.2023.
//

#include <stdio.h>

unsigned int clearBit(unsigned int i, int p) {
    i = i & ~(1 << p); //from IP2x05
    return i;
}

int main() {
    unsigned int i = 63; // 0011 1111
    printf("%u\n", i = clearBit(i, 0)); // 0011 1110 = 63 - 2^0 = 62
    printf("%u\n", i = clearBit(i, 2)); // 0011 1010 = 62 - 2^2 = 62 - 4 = 58
    printf("%u\n", i = clearBit(i, 4)); // 0010 1010 = 58 - 2^4 = 58 - 16 = 42
    return 0;
}
