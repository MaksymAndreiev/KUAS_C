//
// Created by Maksym Andreiev on 13.11.2023.
//

#include <stdio.h>

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