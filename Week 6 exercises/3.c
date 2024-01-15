//
// Created by Maksym Andreiev on 30.10.2023.
//

#include <stdio.h>

int digitChar(int d) {
    if (d >= 0 && d <= 9) {
        return d + '0';
    } else if (d >= 10 && d <= 35) {
        return d + 'A' - 10;
    } else return '?';
}

void iprint(int i) {
    do {
        putchar((char) digitChar(i % 10));
        i = i / 10; //next digit
    } while (i > 0); //loop that runs at least once
    printf("\n");
}

int main(int argc, char *argv[]) {
    iprint(0);
    iprint(1);
    iprint(42);
    iprint(65535);
    return 0;
}
