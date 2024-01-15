//
// Created by Maksym Andreiev on 19.11.2023.
//


#include <stdio.h>


int strlengthMod(char *s) {
    char *s_copy = s;
    while (*s_copy != '\0') {
        ++s_copy;
    }
    return s_copy - s;
}


int main() {
    printf("%d\n", strlengthMod("hello, world"));
    char s[] = "hello, world";
    printf("%d\n", strlengthMod(s));
    char *p = s;
    printf("%d\n", strlengthMod(p));
    return 0;
}
