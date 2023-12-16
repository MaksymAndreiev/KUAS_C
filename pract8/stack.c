//
// Created by Maksym Andreiev on 13.11.2023.
//

#include <stdio.h>
#include "calculator.h"

static double stack[32];
static int depth = 0;

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