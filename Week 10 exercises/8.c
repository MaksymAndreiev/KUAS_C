//
// Created by Maksym Andreiev on 27.11.2023.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LINEMAX 1024


int getchars(char *s, int limit) {
    int i = 0, c;
    while (i < limit - 1 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;
    if (c == EOF && i == 0) return -1;
    s[i] = '\0';
    return i;
}


int main(int argc, char **argv) {
    char line[LINEMAX];
    int numLines = 10;

    for (int i = 1; i < argc; ++i) {
        if (argv[i][0] == '-') {
            int argValue = atoi(argv[i] + 1);
            if (argValue < 0) {
                fprintf(stderr, "Illegal argument\n");
                return -1;
            }
            numLines = argValue;
        } else {
            fprintf(stderr, "Illegal argument\n");
            return -1;
        }
    }

    char **lines = (char **) malloc(numLines * sizeof(char *));
    int index = 0;

    if (lines == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return -1;
    }

    while (getchars(line, sizeof(line)) >= 0) {
        if (index >= numLines) {
            free(lines[index % numLines]);
        }
        lines[index++ % numLines] = strdup(line);
    }

    for (int i = index - numLines; i < index; ++i) {
        if (i >= 0) {
            printf("%s\n", lines[i % numLines]);
            free(lines[i % numLines]);
        }
    }

    free(lines);

    return 0;
}
