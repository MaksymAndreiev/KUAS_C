////
//// Created by Maksym Andreiev on 16.10.2023.
////
//
//#include <stdio.h>
//
//
//int digitValues(char c, int b) {
//    if (b < 2 || b > 36) {
//        return -1;
//    }
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
//
//int strtoi(char *s, int b) {
//    if (b < 2)
//        return -1;
//
//
//    int result = 0;
//    int i = 0;
//    int sign = 1;
//
//    if (s[i] == '-') {
//        sign = -1;
//        i++;
//    } else if (s[i] == '+') {
//        i++;
//    }
//
//    while (s[i] != '\0') {
//        int digit = digitValues(s[i], b);
//        if (digit != -1) {
//            result = result * b + digit;
//        } else{
//            break;
//        }
//        i++;
//    }
//    return result * sign;
//}
//
//int main() {
//    printf("strtoi(\"1010\", 2) == %d\n", strtoi("1010", 2));   // Should return 10
//    printf("strtoi(\"1010\", 2) == %d\n", strtoi("-1010", 2));   // Should return 10
//    printf("strtoi(\"1010\", 8) == %d\n", strtoi("1010", 8));   // Should return 520
//    printf("strtoi(\"1010\", 10) == %d\n", strtoi("1010", 10)); // Should return 1010
//    printf("strtoi(\"1010\", 16) == %d\n", strtoi("1010", 16)); // Should return 4112
//    printf("strtoi(\"2A\", 16) == %d\n", strtoi("2A", 16));     // Should return 42
//
//    // invalid
//    printf("strtoi(\"1012\", 2) == %d\n", strtoi("1012", 2));     // Should return 5
//    printf("strtoi(\"1789\", 8) == %d\n", strtoi("1789", 8));     // Should return 15
//    printf("strtoi(\"101A\", 10) == %d\n", strtoi("101A", 10));   // Should return 101
//    printf("strtoi(\"2FGH\", 16) == %d\n", strtoi("2FGH", 16));   // Should return 47
//
//    return 0;
//}