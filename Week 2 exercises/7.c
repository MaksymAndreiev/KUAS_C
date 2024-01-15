//
// Created by Maksym Andreiev on 02.10.2023.
//

#include <stdio.h>

int main() {
    int c;
    int d[127] = {0};

    FILE *file;
    file = fopen("02-test.txt", "r");

    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    while ((c = fgetc(file)) != EOF) {
        if (0 <= c && c <= 126) {
            d[c]++;
        }
    }

    fclose(file);

    for (int i = 0; i < 127; i++) {
        if (d[i] != 0) {
            if (i == '\t') {
                printf("\\t %d\n", d[i]);
            } else if (i == '\n') {
                printf("\\n %d\n", d[i]);
            } else if (i == ' ') {
                printf("space %d\n", d[i]);
            } else if (i < ' ') {
                printf("\\%03o %d\n", i, d[i]);
            } else {
                printf("%c %d\n", i, d[i]);
            }
        }
    }
    return 0;
}
