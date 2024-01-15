//
// Created by Maksym Andreiev on 23.10.2023.
//

#include <stdio.h>
#include <string.h>

int charIndex(char s[], int c) {
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == c) {
            return i;
        }
    }
    return -1;
}

int main() {
    char s[] = "Hello world, how are you?";
    printf("%d\n", charIndex(s, 'H'));
    printf("%d\n", charIndex(s, 'w'));
    printf("%d\n", charIndex(s, '?'));
    printf("%d\n", charIndex(s, 'q'));
    printf("%d\n", charIndex(s, '\0'));
    return 0;
}