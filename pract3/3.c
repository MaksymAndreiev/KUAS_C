////
//// Created by Maksym Andreiev on 08.10.2023.
////
//
//#include <stdio.h>
//
//
//int isPrime(int n) {
//    for (int i = 2; i <= n / 2; i++) {
//        if (n % i == 0) {
//            return 0;
//        }
//    }
//    return 1;
//}
//
//
//int main() {
//    int i, counter = 0;
//    for (i = 2; i < 100000; i++)
//        if (isPrime(i) == 1)
//            counter++;
//    printf("%d", counter);
//
//    return 0;
//}