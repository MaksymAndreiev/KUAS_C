//
// Created by Maksym Andreiev on 27.11.2023.
//

#include <stdio.h>

int main(int argc, char *argv[]) {
    argv++;

    while (*argv != NULL) {
        printf("%s", *argv);
        argv++;
        printf(" ");
    }
    printf("\n");

    return 0;
}