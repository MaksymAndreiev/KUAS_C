//
// Created by Maksym Andreiev on 27.11.2023.
//

#include <stdio.h>

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; ++i) {
        printf("%s", argv[i]);

        if (i < argc - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}

