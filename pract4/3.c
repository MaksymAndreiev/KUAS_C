////
//// Created by Maksym Andreiev on 16.10.2023.
////
//
//#include <stdio.h>
//
//
//void printDigit(int n) {
//    if (n >= 0 && n <= 9) {
//        putchar('0' + n);
//    } else if (n >= 10) {
//        putchar('A' + (n - 10));
//    }
//}
//
//void printNumber(int n) {
//    if (n >= 0 && n <= 15) {
//        printDigit(n);
//    } else {
//        printNumber(n / 16);
//        printDigit(n % 16);
//    }
//}
//
//int main() {
//    for (int i = 0; i <= 20; ++i) {
//        printNumber(i);
//        printf(" ");
//    }
//}