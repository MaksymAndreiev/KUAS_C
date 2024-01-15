//
// Created by Maksym Andreiev on 02.10.2023.
//


#include <stdio.h>
#define LOWER ' ' // lower limit of temperature
#define UPPER '~' // upper limit of temperature
#define STEP 1 // step size between temperatures
int main() {
    int ch;
    for (ch = LOWER; ch <= UPPER; ch += STEP) {
        printf("%c %d\n", ch, ch);
    }
    return 0;
}
