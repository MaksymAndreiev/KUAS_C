////
//// Created by Maksym Andreiev on 16.10.2023.
////
//
//#include <stdio.h>
//
//int digitValues(char c, int b){
//    if (b < 2 || b > 36) {
//        return -1; // Invalid base
//    }
//
//    if (c >= '0' && c <= '9') {
//        int value = c - '0';
//        if (value < b) {
//            return value;
//        }
//    } else if (c >= 'A' && c <= 'Z') {
//        int value = c - 'A' + 10;
//        if (value < b) {
//            return value;
//        }
//    } else if (c >= 'a' && c <= 'z') {
//        int value = c - 'a' + 10;
//        if (value < b) {
//            return value;
//        }
//    }
//    return -1;
//}
//
//int main() {
//    int base = 14;
//    char input[] = "123aAbBzZ";
//    for (int i = 0; input[i] != '\0'; i++) {
//        int value = digitValues(input[i], base);
//        printf("Character '%c' in base-%d has a digit value: %d\n", input[i], base, value);
//    }
//    return 0;
//}