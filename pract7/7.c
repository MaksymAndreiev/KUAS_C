//
// Created by Maksym Andreiev on 13.11.2023.
//


#include <stdio.h>
#include <ctype.h>

#define STACK_SIZE 32

double stack[STACK_SIZE];
int depth = 0;
char saved_char = '\0';
int char_saved = 0;

char getch() {
    if (char_saved) {
        char_saved = 0;
        return saved_char;
    } else {
        return (char) getchar();
    }
}

void ungetch(int c) {
    saved_char = (char) c;
    char_saved = 1;
}

double number;

int getnum(void) {
    double value = 0.0;
    int c;
    double power = 1.0;
    int sign = 1;

    c = (int) getch();

    if (c == '-') {
        sign = -1;
        c = (int) getch();
    }

    while (isdigit(c)) {
        value = value * 10.0 + (c - '0');
        c = (int) getch();
    }

    if (c == '.') {
        while (isdigit(c = (int) getch())) {
            value = value * 10.0 + (c - '0');
            power *= 10.0;
        }
    }

    ungetch(c);
    number = sign * value / power;
    return 1;
}

int getop(void) {
    int c;

    while (isblank(c = (int) getch()));

    if (c == EOF) return -1;

    if (c == '\n') return 0;

    if (isdigit(c) || c == '-') {
        ungetch(c);
        getnum();
        return '0';
    }

    return c;
}

void push(double d) {
    if (depth < STACK_SIZE) {
        stack[depth++] = d;
    } else {
        printf("stack overflow\n");
    }
}

double pop() {
    if (depth > 0) {
        return stack[--depth];
    } else {
        printf("stack underflow\n");
        return 0.0;
    }
}

int main() {
    int lhs, rhs;
    for (;;) {
        int c = getop();
        switch (c) {
            case -1:
                printf("EOF\n");
                return 0;
            case 0:
                while (depth > 0) {
                    printf("%g ", pop());
                }
                printf("\n");
                break;
            case '0':
                push(number);
                break;
            case '+':
                rhs = (int) pop();
                lhs = (int) pop();
                push(lhs + rhs);
                break;
            case '-':
                rhs = (int) pop();
                lhs = (int) pop();
                push(lhs - rhs);
                break;
            case '/':
                rhs = (int) pop();
                lhs = (int) pop();
                if (rhs != 0) {
                    push((double) lhs / rhs);
                } else {
                    printf("division by zero\n");
                }
                break;
            case '*':
                rhs = (int) pop();
                lhs = (int) pop();
                push(lhs * rhs);
                break;
            case '%':
                rhs = (int) pop();
                lhs = (int) pop();
                if (rhs != 0) {
                    push(lhs % rhs);
                } else {
                    printf("modulus by zero\n");
                }
                break;
            default:
                printf("unknown operator '%c'\n", c);
                break;
        }
    }
    return 0;
}

