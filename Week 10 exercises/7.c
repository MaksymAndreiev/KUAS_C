//
// Created by Maksym Andreiev on 27.11.2023.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LINEMAX 1024
#define NUM_LINES 10

int getchars(char *s, int limit) {
    int i = 0, c;
    while (i < limit - 1 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;
    if (EOF == c && i == 0) return -1;
    s[i] = '\0';
    return i;
}

int main(int argc, char **argv) {
    char line[LINEMAX];
    char **lines = (char **) malloc(NUM_LINES * sizeof(char *));
    int index = 0;

    if (lines == NULL) {
        fprintf(stderr, "Memory allocation error\n");
        return 1;
    }

    while (getchars(line, sizeof(line)) >= 0) {
        if (index >= NUM_LINES) {
            free(lines[index % NUM_LINES]); //11%10
        }
        lines[index++ % NUM_LINES] = strdup(line); //duplicate string
    }

    for (int i = index - NUM_LINES; i < index; ++i) {
        if (i >= 0) {
            printf("%s\n", lines[i % NUM_LINES]);
            free(lines[i % NUM_LINES]);
        }
    }

    free(lines);

    return 0;
}
