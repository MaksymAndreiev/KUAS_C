////
//// Created by Maksym Andreiev on 23.10.2023.
////

#include <stdio.h>
#include <string.h>

void squeeze(char s[], int c) {
    for (int i = 0; i <= strlen(s); i++) {
        if (s[i] == c) {
            for (int j = i; j <= strlen(s); j++) {
                s[j] = s[j + 1]; //from position of c replace with next
            }
            i -= 1;
        }
    }
}

int main() {
    char s[] = "Hello world, how are you?";
    squeeze(s, 'o');
    printf("%s\n", s);
    return 0;
}
