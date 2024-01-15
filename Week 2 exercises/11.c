//
// Created by Maksym Andreiev on 02.10.2023.
//

#include <stdio.h>

#define LOWER ' ' // lower limit of temperature
#define UPPER '~' // upper limit of temperature
#define STEP 1 // step size between temperatures

int main() {
    int ch, counter = 0;
    for (ch = LOWER; ch <= UPPER; ch = ch + STEP) {
        printf("%d %c\t", ch, ch);
        if (counter == 7) {
            printf("\n");
            counter = -1;
        }
        counter++;
    }
    return 0;
}
