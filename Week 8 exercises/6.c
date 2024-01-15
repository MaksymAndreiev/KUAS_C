//
// Created by Maksym Andreiev on 13.11.2023.
//

#include <stdio.h>

#define until(X) while(!(X))

int main() {
    int i = 0;

    until (i++ > 8) {
        printf("%d ", i);
    }

    do {
        printf("%d ", i);
        --i;
    } until (i == 0);

    printf("\n");

    return 0;
}