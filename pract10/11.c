//
// Created by Maksym on 26.11.2023.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int getchars(char *s, int limit) {
    int i = 0, c;
    while (i < limit - 1 && EOF != (c = getchar()) && c != '\n')
        s[i++] = c;
    if (EOF == c && i == 0) return -1;
    s[i] = '\0';
    return i;
}

#define LINEMAX 1024

int main(int argc, char **argv) {
    char line[LINEMAX];
    int startLine = -1;
    int numLines = 10;

    char *programName = strrchr(argv[0], '/');
    if (programName != NULL) {
        programName++;  // Move past the last '/'
    } else {
        programName = argv[0];
    }

    // If the program is run as 'head', make the '+' option illegal
    if (strstr(programName, "head") != NULL) {
        fprintf(stderr, "Illegal option: '+n' is not allowed with 'head'\n");
        startLine = 1;
    }

    // Check command-line arguments
    for (int i = 1; i < argc; ++i) {
        if (argv[i][0] == '-') {
            int argValue = atoi(argv[i] + 1);
            if (argValue <= 0) {
                fprintf(stderr, "Illegal argument\n");
                return 1; // Exit with an error code
            }
            numLines = argValue;
        } else if (argv[i][0] == '+') {
            // If the program is run as 'head', print an error message and exit
            if (startLine == 1) {
                fprintf(stderr, "Illegal option\n");
                return 1; // Exit with an error code
            }

            // Argument starts with '+', try to convert the rest to an integer
            int argValue = atoi(argv[i] + 1);
            if (argValue <= 0) {
                fprintf(stderr, "Illegal argument\n");
                return 1; // Exit with an error code
            }
            startLine = argValue;
        } else {
            fprintf(stderr, "Illegal argument\n");
            return 1;
        }
    }

    // If both startLine and numLines are given, print the n lines starting from line m
    if (startLine > 0) {
        int currentLine = 1;
        while (getchars(line, sizeof(line)) >= 0) {
            if (currentLine >= startLine && currentLine < startLine + numLines) {
                printf("%s\n", line);
            }
            currentLine++;
        }
    } else {
        // If neither startLine nor numLines is given, print the last few lines
        char **lines = (char **)malloc(numLines * sizeof(char *));
        int index = 0;

        if (lines == NULL) {
            fprintf(stderr, "Memory allocation failed\n");
            return 1;
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
    }

    return 0;
}