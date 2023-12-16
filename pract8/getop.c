//
// Created by Maksym on 12.11.2023.
//
#include <stdio.h>
#include <ctype.h>

#include "calculator.h"

static int saved = 0;

int getch(void) {
    int c = saved;
    if (c < 0) return c;
    if (c == 0) return getchar();
    saved = 0;
    return c;
}

void ungetch(int c) {
    saved = c;
}

int getop(char line[], int limit) {
    int n = 0;
    for (;;) {
        int c = getch();
        if (c == EOF) return -1;
        if (c == '\n') return 0;
        if (c <= ' ') continue;
        if (!isdigit(c)) return c;
        do if (n < limit - 1) line[n++] = c; while (isdigit(c = getch()));
        if ('.' == c) {
            do if (n < limit - 1) line[n++] = c; while (isdigit(c = getch()));
        }
        line[n] = '\0';
        ungetch(c);
        return NUMBER;
    }
}
