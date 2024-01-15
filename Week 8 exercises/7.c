//
// Created by Maksym Andreiev on 13.11.2023.
//

#include <stdio.h>

#define SWAP(T, X, Y) { T _tmp = X; X = Y; Y = _tmp; }

int main() {
    int i = 42, j = 666;
    printf("%d %d\n", i, j);
    SWAP(int, i, j);
    printf("%d %d\n", i, j);

    double d = 4.2, e = 6.66;
    printf("%f %f\n", d, e);
    SWAP(double, d, e);
    printf("%f %f\n", d, e);

    return 0;
}