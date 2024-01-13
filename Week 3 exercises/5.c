////
//// Created by Maksym Andreiev on 08.10.2023.
////
//
//#include <stdio.h>
//
//int main() {
//    FILE *fptr;
//    int ch, count_ch = 0;
//    char line[100];
//    fptr = fopen("03-sample.txt", "r");
//    if (fptr == NULL) {
//        printf("Failed to open the file.\n");
//        return 1;
//    }
//    int i = 0;
//    while ((ch = fgetc(fptr)) != EOF) {
//        count_ch++;
//        line[i] = ch;
//        i++;
//        if (ch == '\n' && count_ch < 80) {
//            line[i] = '\0';
//            count_ch = 0;
//            line[0] = '\0';
//            i = 0;
//        } else if (count_ch >= 80 && ch == '\n') {
//            line[i] = '\0';
//            printf("%d  -  %s", count_ch, line);
//            count_ch = 0;
//            line[0] = '\0';
//            i = 0;
//        }
//
//    }
//    fclose(fptr);
//    return 0;
//}