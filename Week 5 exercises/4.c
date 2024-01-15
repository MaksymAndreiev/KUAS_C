//
// Created by Maksym Andreiev on 23.10.2023.
//

#include <stdio.h>

unsigned int getBits(unsigned int i, int p, int n) {
    unsigned int result = (i >> p) & ((1 << n) - 1);
    return result;
}

int main() {
    unsigned int i = 0b10110011100011110000111110000011;
    printf("%u\n", getBits(i, 0, 8)); // 1000 0011
    printf("%u\n", getBits(i, 16, 8)); // bla-bla
    printf("%u\n", getBits(i, 28, 4));
    printf("%d", (1 << 4));
    return 0;
}
