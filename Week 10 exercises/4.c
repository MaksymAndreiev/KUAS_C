//
// Created by Maksym Andreiev on 27.11.2023.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc > 1) {
        printf("Argument as string: %s\n", argv[1]);

        int intValue = atoi(argv[1]);

        printf("Argument as integer: %d\n", intValue);
    }

    return 0;
}