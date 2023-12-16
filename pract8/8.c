//
// Created by Maksym Andreiev on 13.11.2023.
//

#include <stdio.h>

#define SWAP(T, X, Y) do { T _tmp = X; X = Y; Y = _tmp; } while(0)

int main() {
    int i = 42, j = 666, k = 123;

    if (i > j) SWAP(int, i, j);
    else
        SWAP(int, i, k);

    printf("%d %d %d\n", i, j, k);

    return 0;
}