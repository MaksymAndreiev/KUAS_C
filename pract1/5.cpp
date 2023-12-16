//
// Created by Maksym Andreiev on 25.09.2023.
//

#include <stdio.h>

int main() {
    float fahr, celcius;

    for (celcius = 0; celcius < 101; celcius+=10) {
        fahr = 32 + celcius * 9 / 5;
        printf("%6.1f %6.1f\n", celcius, fahr);
    }

    return 0;
}
