//
// Created by Maksym Andreiev on 08.10.2023.
//
#include <stdio.h>

#define LINEMAX 100


int getchars(FILE *file, char line[], int limit) {
    int c, i = 0, n = 0;
    while ((c = fgetc(file)) != EOF && c != '\n') {
        if (i < limit - 2) {
            line[i] = c;
            ++i;
        }
        ++n;
    }
    if (c == '\n') {
        line[i] = c;
        ++i;
        ++n;
    }
    line[i] = '\0';
    return n;
}

int copy(char to[], char from[]) {
    int i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
    return i;
}

int main() {

    char line[LINEMAX];
    char longest[LINEMAX];
    int len, max = 0;

    FILE *file = fopen("03-sample.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    while ((len = getchars(file, line, LINEMAX)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    printf("%s\n", longest);

    fclose(file);

    return 0;
}


