//
// Created by Maksym Andreiev on 16.10.2023.
//

#include <stdio.h>

int digitValues(char c, int b) {
    if (b < 2 || b > 36) {
        return -1;
    }
    if (c >= '0' && c <= '9') {
        int value = c - '0';
        if (value < b) {
            return value;
        }
    } else if (c >= 'A' && c <= 'Z') {
        int value = c - 'A' + 10;
        if (value < b) {
            return value;
        }
    } else if (c >= 'a' && c <= 'z') {
        int value = c - 'a' + 10;
        if (value < b) {
            return value;
        }
    }
    return -1;
}

int strtoi(char *s, int b) {
    if (b < 2) {
        return -1;
    }

    int result = 0;
    int i = 0;
    int sign = 1;

    while (s[i] == ' ' || s[i] == '\t') {
        i = i + 1;
    }

    while (s[i] == '+' || s[i] == '-') {
        if (s[i] == '-') {
            sign = -sign;
        }
        i++;
    }

    while (s[i] != '\0') {
        int digit = digitValues(s[i], b);

        if (digit == -1) {
            break;
        }

        result = result * b + digit;
        i++;
    }

    return result * sign;
}

int main() {
    printf("%d\n", strtoi(" 101010", 2));
    printf("%d\n", strtoi(" +52", 8));
    printf("%d\n", strtoi("++42", 10));
    printf("%d\n", strtoi(" 2a", 16));
    printf("%d\n", strtoi(" -2A", 16));
    printf("%d\n", strtoi("--2A", 16));
    printf("%d\n", strtoi(" 7fffffff", 16));
    printf("%d\n", strtoi(" ffffffff", 16));
    printf("%d\n", strtoi(" -ffffffff", 16));
    printf("%d\n", strtoi(" 80000000", 16));
    printf("%d\n", strtoi(" -80000000", 16));
    return 0;
}