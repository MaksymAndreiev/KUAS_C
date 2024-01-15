//
// Created by Maksym Andreiev on 27.11.2023.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int valueToPrint = 10;

    if (argc == 1) {
    } else if (argc == 2) {
        if ('-' == *argv[1]) {
            valueToPrint = atoi(argv[1] + 1);
        } else {
            printf("Illegal argument\n");
            return 1;
        }
    } else {
        printf("Too many arguments\n");
        return 1;
    }

    printf("%d\n", valueToPrint);

    return 0;
}
