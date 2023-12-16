////
//// Created by Maksym Andreiev on 08.10.2023.
////
//
//#include <stdio.h>
//#include <string.h>
//#include <malloc.h>
//
//char *trim(char string[]) {
//    string[strcspn(string, "\n")] = 0;
//
//    int start = 0, end = strlen(string) - 1;
//
//    // Trim spaces and tabs from the start of the string
//    while (string[start] == ' ' || string[start] == '\t') {
//        start++;
//    }
//
//    // Trim spaces and tabs from the end of the string
//    while (string[end] == ' ' || string[end] == '\t') {
//        end--;
//    }
//
//    int length = end - start + 1;
//
//    char *trimmedString = (char *) malloc((length + 1) * sizeof(char));
//    strncpy(trimmedString, string + start, length);
//
//    trimmedString[length] = '\0';
////    if (strlen(trimmedString) < 1) {
////        return "\0";
////    }
//    return trimmedString;
//}
//
//
//int main() {
//    int i = 0;
//    FILE *file;
//    file = fopen("03-blanks.txt", "r");
//    if (file == NULL) {
//        printf("Failed to open the file.\n");
//        return 1;
//    }
//    char line[256];
//
//    while (fgets(line, sizeof(line), file)) {
//        i += 1;
//        char *trimmed = trim(line);
//        if (strlen(trimmed) > 0) {
//            printf("%llu %s\n", strlen(trimmed), trimmed);
//        }
//    }
//    free(trim(line));
//    return 0;
//}
//
//
