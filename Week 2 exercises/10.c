//
// Created by Maksym Andreiev on 02.10.2023.
//

#include <stdio.h>

int main() {
    FILE *fptr;
    int ch, count_new_lines = 0, count_spaces = 0;
    fptr = fopen("02-test.txt", "r");
    if (fptr == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }
    while ((ch = fgetc(fptr)) != EOF) {
        if (ch == ' ' || ch == '\t') {
            count_spaces++;
            if (count_spaces <= 1) {
                printf(" ");
            }
        } else if (ch == '\n') {
            count_new_lines++;
            if (count_new_lines <= 1) {
                printf("\n");
            }
        } else {
            printf("%c", ch);
            count_new_lines = 0;
            count_spaces = 0;
        }
    }
    fclose(fptr);
    return 0;
}
