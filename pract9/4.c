////
//// Created by Maksym Andreiev on 19.11.2023.
////
//
//#include <stdio.h>
//
//char *strappend(char *s, char *t){
//    char *result = s;
//    while(*s++);
//    s--; //move back to the null term
//    while ((*s++ = *t++));
//    return result;
//}
//
//
//int main(){
//    char s[100] = "append ", *t = "me!";
//    printf("%s\n", strappend(s, t));
//    return 0;
//}
