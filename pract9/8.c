////
//// Created by Maksym Andreiev on 19.11.2023.
////
//
//#include <stdio.h>
//
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
//void swapchars(char *c, char *d) {
//    char temp = *c;
//    *c = *d;
//    *d = temp;
//}
//
//char *revchars(char *s, char *t) {
//    char *start = s;
//    char *end = t - 1;
//
//    while (start < end) {
//        swapchars(start, end);
//        start++;
//        end--;
//    }
//    return s;
//}
//
//int main() {
//    char a[100] = "";
//    char b[100] = "b";
//    char c[100] = "bc";
//    char d[100] = "bcd";
//    char s[100] = "peter piper picked a peck";
//    printf("%s\n", revchars(a, a + strlength(a)));
//    printf("%s\n", revchars(b, b + strlength(b)));
//    printf("%s\n", revchars(c, c + strlength(c)));
//    printf("%s\n", revchars(d, d + strlength(d)));
//    printf("%s\n", revchars(s, s + strlength(s)));
//    return 0;
//}