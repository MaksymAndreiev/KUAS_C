////
//// Created by Maksym Andreiev on 30.10.2023.
//
//#include <stdio.h>
//
//int main() {
//    int d = 0, l = 0, n = 0, t = 0, s = 0, o = 0;
//    int ch;
//    FILE *file;
//    file = fopen("06-test.txt", "r");
//    if (file == NULL) {
//        printf("Failed to open the file.\n");
//        return 1;
//    }
//    // your loop and switch statement go here :)
//    while ((ch = fgetc(file)) != EOF) {
//        switch (ch) {
//            case '\n':
//                n++;
//                break;
//            case '\t':
//                t++;
//                break;
//            case ' ':
//                s++;
//                break;
//            default:
//                if ('0' <= ch && ch <='9'){
//                    d++;
//                }
//                else if ('A' <= ch && ch <= 'z'){
//                    l++;
//                }
//                else {
//                    o++;}
//                break;
//        }
//
//    }
//    printf("digits: %3d\n", d);
//    printf("letters: %3d\n", l);
//    printf("tabs: %3d\n", t);
//    printf("newlines: %3d\n", n);
//    printf("spaces: %3d\n", s);
//    printf("others: %3d\n", o);
//    return 0;
//}