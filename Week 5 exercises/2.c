//
// Created by Maksym Andreiev on 23.10.2023.
//

#include <stdio.h>


unsigned int setBit(unsigned int i, int p) {
    i |= (1 << p);  //from IP2x05
    return i;
}


int main() {
    unsigned int i = 0; // 0000 0000
    printf("%u\n", i = setBit(i, 1)); // 0000 0010 = 2^1
    printf("%u\n", i = setBit(i, 3)); // 0000 1010 = 2^3 + 2^1 = 8 + 2
    printf("%u\n", i = setBit(i, 5)); // 0010 1010 = 2^5 + 2^3 + 2^1 = 32 + 8 + 2
    return 0;
}