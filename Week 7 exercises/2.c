//
// Created by Maksym Andreiev on 13.11.2023.
//

#include <stdio.h>
#include <ctype.h>

double number;

int getnum(void) {
    double value = 0;
    int c;

    while (isdigit(c = getchar())) {
        value = value * 10 + c - '0';
    }

    number = value;
    return 1;
}


int getop(void) {
    int c;

    while (isblank(c = getchar()));

    if (c == EOF) {
        return -1;
    }

    if (c == '\n') {
        return 0;
    }

    if (isdigit(c)) {
        ungetc(c, stdin);
        getnum();
        return '0';
    }

    return c;
}


int main() {
    for (;;) {
        int c = getop();
        switch (c) {
            case -1:
                printf("EOF\n");
                return 0;
            case 0:
                printf("newline\n");
                break;
            case '0':
                printf("%g\n", number);
                break;
            default:
                printf("unknown operator '%c'\n", c);
                break;
        }
    }
    return 0;
}
