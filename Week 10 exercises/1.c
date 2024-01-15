//
// Created by Maksym Andreiev on 27.11.2023.
//

#include <stdio.h>

char *monthName(int n) {
    static char name[][4] = {
            "???", // illegal month
            "Jan", "Feb", "Mar", "Apr", "May", "Jun",
            "Jul", "Aug", "Sep", "Oct", "Nov", "Dec",
    };
    return 1 <= n && n <= 12 ? name[n] : name[0];
}

int main() {
    printf("%s\n", monthName(11));
    return 0;
}