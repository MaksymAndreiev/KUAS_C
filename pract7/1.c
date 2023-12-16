////
//// Created by Maksym Andreiev on 13.11.2023.
////
//
//#include <stdio.h>
//#include <ctype.h>
//
//
//double number;
//
//int getnum(void) {
//    double value = 0;
//    int c;
//
//    while (isdigit(c = getchar())) {
//        if (c == EOF) {
//            return -1;
//        }
//        value = value * 10 + c - '0';
//    }
//
//
//    number = value;
//    return 1;
//}
//
//int main() {
//    while (getnum() != -1.0) printf("%g\n", number);
//    return 0;
//}