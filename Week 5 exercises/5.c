//
// Created by Maksym Andreiev on 23.10.2023.
//

#include <stdio.h>

unsigned int setBits(unsigned int i, int p, int n, int b) {
    unsigned int mask = ~(((1 << n) - 1) << p); // get n-p one's, shift by p, invert to 0
    i &= mask; // apply zero's mask
    b &= (1 << n) - 1; // get n elements
    i |= (b << p); // set the number p to b
    return i;
}


void printBinary(unsigned int number) {
    if (number > 1)
        printBinary(number / 2);
    printf("%d", number % 2);
}


int main() {
    unsigned int i = 0b10110011100011110000111110000011;
    printf("%u\n", i = setBits(i, 2, 30, 1)); // 7
    printBinary(i);
    printf("\n");
    printf("%u\n", i = setBits(i, 6, 2, 7)); // 199
    printBinary(i);
    printf("\n");
    printf("%u\n", i = setBits(i, 2, 4, 15)); // 255
    printBinary(i);
    return 0;
}
