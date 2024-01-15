//
// Created by Maksym Andreiev on 19.11.2023.
//

#include <stdio.h>

int strlength(char *s) {
    int counter = 0;
    while (*s) {
        counter++;
        ++s;
    }
    return counter;
}

void swapchars(char *c, char *d) {
    char temp = *c;
    *c = *d;
    *d = temp;
}

char *reverse(char *s) {
    int length = strlength(s);
    char *start = s;
    char *end = s + length - 1;

    while (start < end) {
        swapchars(start, end);
        start++;
        end--;
    }

    return s;
}


int main() {
    char a[100] = "";
    char b[100] = "b";
    char c[100] = "bc";
    char d[100] = "bcd";
    char s[100] = "peter piper picked a peck";
    printf("%s\n", reverse(a));
    printf("%s\n", reverse(b));
    printf("%s\n", reverse(c));
    printf("%s\n", reverse(d));
    printf("%s\n", reverse(s));
    return 0;
}
