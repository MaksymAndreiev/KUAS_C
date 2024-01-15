//
// Created by Maksym Andreiev on 23.10.2023.
//

#include <stdio.h>
#include <string.h>

int lower(int c) {
    if ('A' <= c && c <= 'Z') {
        return c + 32;
    } else {
        return c;
    }
}

void toLower(char s[]) {
    for (int i = 0; i <= strlen(s); i++) {
        s[i] = lower(s[i]);
    }
}

int main() {
    char s[] = "Hello World How Are You?";
    toLower(s);
    printf("%s\n", s);
    return 0;
}