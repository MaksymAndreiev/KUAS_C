////
//// Created by Maksym Andreiev on 02.10.2023.
////
//
//#include <stdio.h>
//
//int main() {
//    FILE *fptr;
//    int ch;
//    fptr = fopen("02-test.txt", "r");
//    if (fptr == NULL) {
//        printf("Failed to open the file.\n");
//        return 1;
//    }
//    while ((ch = fgetc(fptr)) != EOF) {
//        switch (ch) {
//            case '\t':
//                printf("\\t");
//                break;
//            case '\n':
//                printf("\\n");
//                break;
//            default:
//                printf("%c", ch);
//                break;
//        }
//    }
//    fclose(fptr);
//    return 0;
//}
