//
// Created by Maksym Andreiev on 19.11.2023.
//

#include <stdio.h>

int wordlen(char *s) {
    int length = 0;
    while (*s && *s != ' ') {
        length++;
        s++;
    }
    return length;
}

void swapchars(char *c, char *d) {
    char temp = *c;
    *c = *d;
    *d = temp;
}

char *revchars(char *start, char *end) {
    while (start < end) {
        swapchars(start, end);
        start++;
        end--;
    }
    return start;
}

char *revwords(char *s) {
    char *start = s;
    char *end;

    while (*start) {
        while (*start && *start == ' ') {
            start++;
        }

        if (!*start) {
            break;
        }

        end = start + wordlen(start) - 1;
        revchars(start, end);
        start = end + 1;
    }
    return s;
}


int main() {
    char s[100] = "retep repip dekcip a kcep fo delkcip reppep";
    printf("%s\n", revwords(s));
    return 0;
}