////
//// Created by Maksym Andreiev on 02.10.2023.
////
//
//#include <stdio.h>
//
//int main() {
//    int c;
//    int d[10] = {0};
//    FILE *file;
//    file = fopen("5.c", "r");
//    if (file == NULL) {
//        printf("Failed to open the file.\n");
//        return 1;
//    }
//    while ((c = fgetc(file)) != EOF) {
//        if ('0' <= c && c <= '9') {
//            d[c - '0']++;
//        }
//    }
//    fclose(file);
//    for (int i = 0; i < 10; i++)
//        printf("%d %d\n", i, d[i]);
//    return 0;
//}