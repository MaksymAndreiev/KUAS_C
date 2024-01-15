//
// Created by Maksym Andreiev on 02.10.2023.
//

#include <stdio.h>
#include <ctype.h>

#define OUTSIDE 0 // not in a word
#define INSIDE 1 // in a word

int main() {
    FILE *file;
    file = fopen("02-test.txt", "r");

    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }
    int c, state, w = 0;
    state = OUTSIDE;
    while ((c = fgetc(file)) != EOF) {
        if (isspace(c)) {
            state = OUTSIDE;
        }
        else {
            if (state == OUTSIDE) {
                w++;
                state = INSIDE;
            }
        }
    }
    printf("The number of words: %d", w);
    return 0;
}
