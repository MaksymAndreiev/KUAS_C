//
// Created by Maksym Andreiev on 25.12.2023.
//

#include <stdio.h>

#define SIZE 3

//typedef struct {
//    double data[SIZE][SIZE];
//} Mat3;

typedef double Mat3[SIZE][SIZE];

void Mat3_print(Mat3 M) {
    printf("{ ");
    for (int i = 0; i < SIZE; ++i) {
        printf("{ ");
        for (int j = 0; j < SIZE; ++j) {
            printf("%.6f", M[i][j]);
            if (j < SIZE - 1) printf(", ");
        }
        printf(" }");
        if (i < SIZE - 1) printf("\n  ");
    }
    printf(" }\n");
}

void Mat3_mulMat3(Mat3 A, Mat3 B, Mat3 P) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            P[i][j] = 0; // init with 0
            for (int k = 0; k < SIZE; ++k) {
                P[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {

    Mat3 A = {{2, 1,  5},
              {2, 10, 5},
              {3, 1,  4}};
    Mat3 B = {
            {8, 7, 1},
            {4, 2, 7},
            {2, 3, 5}
    };
    Mat3 P;

    Mat3_mulMat3(A, B, P);
    Mat3_print(P);
    return 0;
}
