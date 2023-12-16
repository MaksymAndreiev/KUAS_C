////
//// Created by Maksym Andreiev on 19.11.2023.
////
//#include <stdio.h>
//
//int strlength(char *s) {
//    int counter = 0;
//    while (*s) {
//        counter++;
//        ++s;
//    }
//    return counter;
//}
//
//#define MAX(A, B)   ((A) > (B) ? (A) : (B))
//
//int strmax(char *s, char *t) {
//    return strlength(MAX(s, t));
//}
//
//int main() {
//    printf("%d\n", strmax("", ""));
//    printf("%d\n", strmax("", "abc"));
//    printf("%d\n", strmax("abc", ""));
//    printf("%d\n", strmax("abc", "abc"));
//    printf("%d\n", strmax("abcdef", "abc"));
//    printf("%d\n", strmax("abc", "abcdefghi"));
//    return 0;
//}
