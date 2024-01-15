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
//    for (int i = 0; i < len -1; i++){
//        end++;
//    }
//    for(int i = 0; i < len/2; i++){
//        temp = *end;
//        *end = *start;
//        *start = temp;
//        start++;
//        end--;
//    }
//}
//
//void itosn(int i, char s[], int n) {
//    int count = 0;
//    do {
//        if (n < 2) break;
//        s[count] = (char) digitChar(i % 10);
//        i = i/10;
//        count++;
//        n--;
//    } while (i > 0);
//    s[count] = '\0';
//    reverse(s, count);
//}
//
//int main() {
//    char s[1024];
//    itosn( 0, s, 4); printf("%s\n", s);
//    itosn( 1, s, 4); printf("%s\n", s);
//    itosn( 42, s, 4); printf("%s\n", s);
//    itosn(65535, s, 4); printf("%s\n", s);
//    return 0;
//}
