//
// Created by Maksym Andreiev on 16.10.2023.
//

#include <stdio.h>

void printDigit(int n) {
    if (n >= 0 && n <= 9) {
        putchar('0' + n);
    } else if (n >= 10) {
        putchar('A' + (n - 10));
    }
}


void printNumbers(int n, int b) {
    if (n < b) {
        printDigit(n);
    } else {
        printNumbers(n / b, b);
        printDigit(n % b);
    }
}


int main() {
    for (int i = 2; i <= 20; ++i) {
        printNumbers(42, i);
        printf(" ");
    }
}