#include <stdio.h>

#define LOWER 0 // lower limit of temperature
#define UPPER 100 // upper limit of temperature
#define STEP 10 // step size between temperatures

int main() {
    float fahr, celsius;
    for (celsius = LOWER; celsius <= UPPER; celsius += STEP) {
        fahr = 32 + celsius * 9 / 5;
        printf("%6.1f %6.1f\n", celsius, fahr);
    }
    return 0;
}
