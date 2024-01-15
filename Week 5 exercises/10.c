//
// Created by Maksym Andreiev on 23.10.2023.
//


#include <stdio.h>
#include <string.h>

int charIndex(char s[], int c) {
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == c) return i;
    }
    return -1;
}

void squeezeAll(char s[], char t[]) {
    int in = 0, out = 0;
    while (s[in]) {
        if (charIndex(t, s[in]) == -1) { //if it's not in t
            s[out++] = s[in];
        }
        ++in;
    }
    s[out] = '\0';
}


int main() {
    char s[] = "Hello world, how are you?";

    squeezeAll(s, "aeiou");
    printf("%s\n", s);
    squeezeAll(s, " ,");
    printf("%s\n", s);
    squeezeAll(s, "Hld");
    printf("%s\n", s);

    return 0;
}
