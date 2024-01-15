//
// Created by Maksym Andreiev on 13.11.2023.
//

#include <stdio.h>
#include <ctype.h>
#include "calculator.h"


int main() {
    char line[32];
    for (;;) {
        int c = getop(line, sizeof(line));
        if (c < 0) break;
        switch (c) {
            case 0:
                while (stackDepth()) printf("=> %g\n", pop());
                break;
            case NUMBER:
                push(atod(line));
                break;
            case '+': {
                double r = pop(), l = pop();
                push(l + r);
            }
                break;
            case '-': {
                double r = pop(), l = pop();
                push(l - r);
            }
                break;
            case '*': {
                double r = pop(), l = pop();
                push(l * r);
            }
                break;
            case '/': {
                double r = pop(), l = pop();
                push(l / r);
            }
                break;
            case '%': {
                double r = pop(), l = pop();
                push(l - r * (int) (l / r));
            }
                break;
            default:
                printf("unknown operator: %c\n", c);
                break;
        }
    }
    return 0;
}

int saved = 0;

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

/* stack - last-in first-out storage of doubles */

double stack[32];
int depth = 0;

int stackDepth(void) {
    return depth;
}

void push(double d) {
    if (depth > 31)
        printf("stack overflow\n");
    else
        stack[depth++] = d;
}

double pop(void) {
    if (depth < 1) {
        printf("stack underflow\n");
        return 0;
    }
    return stack[--depth];
}

/* atod - convert an ASCII string into a double value */

double atod(char line[]) {
    int i = 0;
    while (isspace(line[i])) ++i;
    double value = 0.0;
    while (isdigit(line[i])) value = value * 10.0 + line[i++] - '0';
    if ('.' == line[i++]) {
        double scale = 1.0;
        while (isdigit(line[i])) {
            value = value * 10.0 + line[i++] - '0';
            scale *= 10.0;
        }
        value /= scale;
    }
    return value;
}