//
// Created by Maksym Andreiev on 08.10.2023.
//
#include <stdio.h>


//int isPrime(int n) {
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}


int main() {
    int i;
    for (i = 2; i <= 20; i++) {
        printf("%d is %s\n", i, isPrime(i) ? "prime" : "composite");
    }

    return 0;
}