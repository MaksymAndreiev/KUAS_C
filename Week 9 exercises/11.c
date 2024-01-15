//
// Created by Maksym Andreiev on 19.11.2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINEMAX  1000
#define LINESMAX 1000

char *strcopy(char *s, char *t) {
    char *result = s;
    while ((*s++ = *t++));
    return result;
}

char *strduplicate(const char *s) {
    char *copy = (char *)malloc(strlen(s) + 1);
    if (copy != NULL) {
        strcopy(copy, s);
    }
    return copy;
}


int main() {
    FILE *file;
    char *lines[LINESMAX];
    char line[LINEMAX];
    int lineCount = 0;

    file = fopen("test.txt", "r");
    if (file == NULL) {
        perror("Error");
        return 1;
    }

    while (fgets(line, LINEMAX, file) != NULL && lineCount < LINESMAX) {
        lines[lineCount] = strduplicate(line);
        lineCount++;
    }
    fclose(file);

    for (int i = lineCount - 1; i >= 0; i--) {
        printf("%s", lines[i]);
        free(lines[i]);
    }
    return 0;
}