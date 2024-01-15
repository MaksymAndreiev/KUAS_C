//
// Created by Maksym Andreiev on 08.10.2023.
//

#include <stdio.h>
#include <string.h>


void reverse(char s[]) {
    for (int len = strlen(s); len > 0; len--) {
        printf("%c", s[len]);
    }
}


int main() {
    int i = 0, ch;
    char line[100];
    FILE *fptr = fopen("03-sample.txt", "r");
    if (fptr == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }
    while ((ch = fgetc(fptr)) != EOF) {
        line[i] = ch;
        i++;
        if (ch == '\n') {
            line[i] = '\0';
            reverse(line);
            line[0] = '\0';
            i = 0;
        }
    }
    fclose(fptr);
    return 0;
}
