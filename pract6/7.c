////
//// Created by Maksym Andreiev on 30.10.2023.
////
//
//#include <stdio.h>
//
//int digitChar(int d) {
//    if (d >= 0 && d <= 9) {
//        return d + '0';
//    } else if (d >= 10 && d <= 35) {
//        return d + 'A' - 10;
//    } else return '?';
//}
//
//void reverse(char s[], int len) {
//    char *start, *end, temp;
//    start = s;
//    end = s;
//    for (int i = 0; i < len - 1; i++) {
//        end++;
//    }
//    for (int i = 0; i < len / 2; i++) {
//        temp = *end;
//        *end = *start;
//        *start = temp;
//        start++;
//        end--;
//    }
//}
//
//void itosnb(int i, char s[], int n, int b) {
//    int count = 0;
//    do {
//        if (n <= 1) break;
//        s[count] = (char) digitChar(i % b);
//        i = i / b;
//        count++;
//        n--;
//    } while (i > 0);
//    s[count] = '\0';
//    reverse(s, count);
//}
//
//
//int main() {
//    char s[1024];
//    itosnb(0, s, 1024, 2);
//    printf("%s\n", s);
//    itosnb(1, s, 1024, 2);
//    printf("%s\n", s);
//    itosnb(42, s, 1024, 2);
//    printf("%s\n", s);
//    itosnb(42, s, 1024, 8);
//    printf("%s\n", s);
//    itosnb(42, s, 1024, 10);
//    printf("%s\n", s);
//    itosnb(65535, s, 1024, 16);
//    printf("%s\n", s);
//    return 0;
//}