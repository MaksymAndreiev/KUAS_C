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

#define MAX(A, B)   (strlength(A) > strlength(B) ? strlength(A) : strlength(B))

int strmax(char *s, char *t) {
    return MAX(s, t);
}

void swapchars(char *c, char *d) {
    char temp = *c;
    *c = *d;
    *d = temp;
}

void swapstrings(char *s, char *t) {
    int str_max = strmax(s, t);
    for (int i = 0; i < str_max; i++){
        swapchars(s+i, t+i);
    }
}


int main() {
    char s[100] = "the first string";
    char t[100] = "another string, a bit longer";
    printf("%s\n%s\n", s, t);
    swapstrings(s, t);
    printf("%s\n%s\n", s, t);
    return 0;
}
