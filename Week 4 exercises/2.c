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

int main() {

    for (int i = 0; i <= 20; ++i) {
        printDigit(i);
        printf(" ");
    }
}