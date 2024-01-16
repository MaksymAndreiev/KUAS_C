//
// Created by Maksym Andreiev on 25.12.2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sieve_of_eratosthenes(int max_prime) {

    int *primes = (int *) malloc((max_prime + 1) * sizeof(int)); //n+0

    if (max_prime < 2) {
        printf("Enter max_prime > 2 \n");
        return;
    }

    //all numbers considered as prime
    for (int i = 0; i <= max_prime; i++) {
        primes[i] = 1;
    }

    // 0 and 1 are not prime
    primes[0] = primes[1] = 0;

    for (int i = 2; i <= sqrt(max_prime); i++) {
        if (primes[i]) { //if it's marked as prime
            // mark multiples of the current prime as non-prime
            for (int j = i * i; j <= max_prime; j += i) { //start from 4 and go 6, 8, etc.
                primes[j] = 0;
            }
        }
    }

    for (int i = 2; i <= max_prime; i++) {
        if (primes[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");
    free(primes);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Enter number.\n");
        return 1;
    }
    if (argc != 2) {
        printf("usage: %s number\n", argv[0]);
        return 1;
    }
    int max_prime = atoi(argv[1]); //str to int
    sieve_of_eratosthenes(max_prime);
    return 0;
}