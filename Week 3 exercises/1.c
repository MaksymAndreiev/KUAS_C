//
// Created by Maksym Andreiev on 08.10.2023.
//


#include <math.h>
#include <stdio.h>

float power(float x, float y){
    return exp(y* log(x));
}

int main (){
    for(float i=1; i<=4.0; i+= 0.5){
        printf("%.2f\t%.2f\n", i, power(i, 0.5));
    }
    return 0;
}
