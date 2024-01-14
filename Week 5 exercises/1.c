////
//// Created by Maksym Andreiev on 23.10.2023.
////
//
//#include <stdio.h>
//
//
//int getBit(int i, int p) {
//    int result = (i >> p) & 1; //from IP2x05
//    return result;
//}
//
//
//
//int main() {
//    unsigned int i = 0b10110011100011110000111110000011;
//    for (int n = 0; n < 16; ++n)
//        printf("%u ", getBit(i, n));
//    return 0;
//}