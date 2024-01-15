////
//// Created by Maksym Andreiev on 04.12.2023.
////
//
//#include <stdio.h>
//#include <string.h>
//
//struct string {
//    char *chars;
//    int size;
//};
//
//struct string string_new(char *s) {
//    struct string str = {strdup(s), (int)strlen(s)};
//    return str;
//}
//
//struct string string_println(struct string s) {
//    printf("\"%.*s\"\n", s.size, s.chars);
//    return s;
//}
//
//int main(int argc, char **argv) {
//    struct string s = string_new("hello");
//    string_println(s);
//    return 0;
//}
