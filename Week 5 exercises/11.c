//
// Created by Maksym Andreiev on 23.10.2023.
//

#include <stdio.h>


void add(unsigned char a[], unsigned char b[], unsigned char s[], int n) {
    unsigned int c = 0;

    for (int i = 0; i < n; i++) {
        unsigned int sum = a[i] + b[i] + c;
        s[i] = (unsigned char) (sum % 256);
        c = sum / 256;
    }
}


int main() {
    unsigned char a[8] = {0x10, 0x20, 0x30, 0x40, 0x50, 0x60, 0x70, 0x80};
    unsigned char b[8] = {0x90, 0xA0, 0xB0, 0xC0, 0xD0, 0xE0, 0xF0, 0x00};
    unsigned char s[8];
    add(a, b, s, 8);
    for (int i = 7; i >= 0; --i)
        printf("%02x", s[i]);
    printf("\n");
    return 0;
}
