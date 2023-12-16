////
//// Created by Maksym Andreiev on 02.10.2023.
////
//
//#include <stdio.h>
//#include <ctype.h>
//
//#define OUTSIDE 0 // not in a word
//#define INSIDE 1 // in a word
//
//int main() {
//    FILE *file;
//    file = fopen("02-test.txt", "r");
//
//    if (file == NULL) {
//        printf("Failed to open the file.\n");
//        return 1;
//    }
//    int c, state, lines = 0, words = 0, chars = 0;
//    state = OUTSIDE;
//    while ((c = fgetc(file)) != EOF) {
//        chars++;
//        if (isspace(c)) {
//            state = OUTSIDE;
//            if (c == '\n')
//                lines++;
//        }
//        else {
//            if (state == OUTSIDE) {
//                words++;
//                state = INSIDE;
//            }
//        }
//    }
//    printf("Number of characters: %d\nNumber of words: %d\nNumber of lines: %d", chars, words, lines);
//    return 0;
//}
