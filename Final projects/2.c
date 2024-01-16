//
// Created by Maksym Andreiev on 25.12.2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Enter integer.\n");
        return 1;
    }
    if (argc != 2) {
        printf("usage: %s n-points\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]); // str to int
    if (n <= 0) {
        printf("Enter positive number.\n");
        return 1;
    }

    int inside = 0;
    srand(17);

    for (int i = 0; i < n; i++) {
        double x = ((double) rand() / RAND_MAX) * 2.0; // diameter of 2
        double y = ((double) rand() / RAND_MAX) * 2.0;
        double dist = sqrt(pow(x - 1.0, 2) + pow(y - 1.0, 2)); // (1;1) is the center

        if (dist < 1.0) {
            inside++;
        }
    }

    double approx_pi = 4.0 * inside / n; // as pi - inside, a - n
    printf("%d out of %d points inside the circle\n", inside, n);
    printf("pi is approximately %.8lf\n", approx_pi);

    return 0;
}
