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
//void itor(int i, char s[]) {
//    int count = 0;
//    do {
//        s[count] = (char) digitChar(i % 10);
//        i = i / 10;
//        count++;
//    } while (i > 0);
//    s[count] = '\0';
//}
//
//
//int main() {
//    char s[1024];
//    itor(0, s);
//    printf("%s\n", s);
//    itor(1, s);
//    printf("%s\n", s);
//    itor(42, s);
//    printf("%s\n", s);
//    itor(65535, s);
//    printf("%s\n", s);
//    return 0;
//}