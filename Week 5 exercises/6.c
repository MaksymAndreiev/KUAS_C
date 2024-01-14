//
////Created by
////Maksym Andreiev
////on 23.10.2023.
//
//
//#include <stdio.h>
//
//int countBits(unsigned int n) {
//    int count = 0;
//    while (n != 0) {
//        if (n & 1) {
//            count += 1;
//        }
//        n >>= 1;
//    }
//    return count;
//}
//
//int main() {
//    for (int i = 0; i <= 15; ++i)
//        printf("%d ", countBits(i));
//    return 0;
//}