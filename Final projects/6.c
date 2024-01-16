//
// Created by Maksym Andreiev on 25.12.2023.
//

#include <stdio.h>
#define SIZE 3

typedef struct {
    double data[SIZE];
} Vec3;

typedef struct {
    double data[SIZE][SIZE];
} Mat3;

void Vec3_print(Vec3 V) {
    printf("{ %.6f, %.6f, %.6f }\n", V.data[0], V.data[1], V.data[2]);
}

void Mat3_print(Mat3 M) {
    printf("{ ");
    for (int i = 0; i < SIZE; ++i) {
        printf("{ ");
        for (int j = 0; j < SIZE; ++j) {
            printf("%.6f", M.data[i][j]);
            if (j < 2) printf(", ");
        }
        printf(" }");
        if (i < 2) printf("\n  ");
    }
    printf(" }\n");
}

void Mat3_mulVec3(Mat3 M, Vec3 V, Vec3 *P) {
    for (int i = 0; i < SIZE; ++i) {
        P->data[i] = 0;
        for (int j = 0; j < SIZE; ++j) {
            P->data[i] += M.data[i][j] * V.data[j];
        }
    }
}

void Mat3_mulMat3(Mat3 A, Mat3 B, Mat3 *result) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            result->data[i][j] = 0;
            for (int k = 0; k < SIZE; ++k) {
                result->data[i][j] += A.data[i][k] * B.data[k][j];
            }
        }
    }
}

int main() {

    Vec3 V = {3, 4, 1};
    Vec3_print(V);

    Mat3 S = {{
        {3, 0, 0},
        {0, 2, 0},
        {0, 0, 1}
    }};
    Mat3 T = {{
        {1, 0, 5},
        {0, 1, 7},
        {0, 0, 1}
    }};

    Vec3 SV;
    Mat3_mulVec3(S, V, &SV);
    Vec3_print(SV);

    Vec3 TV;
    Mat3_mulVec3(T, V, &TV);
    Vec3_print(TV);

    Mat3 TS;
    Mat3_mulMat3(T, S, &TS);

    Vec3 TSV;
    Mat3_mulVec3(TS, V, &TSV);
    Vec3_print(TSV);

    return 0;
}