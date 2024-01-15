//
// Created by Maksym Andreiev on 30.10.2023.
//

#include <stdio.h>

int digitChar(int d) {
    if (d >= 0 && d <= 9) {
        return d + '0';
    } else if (d >= 10 && d <= 35) {
        return d + 'A' - 10;
    } else return '?';
}

void reverse(char s[], int len) {
    char *start, *end, temp;
    start = s;
    end = s;
    for (int i = 0; i < len -1; i++){
        end++;
    }
    for(int i = 0; i < len/2; i++){
        temp = *end;
        *end = *start;
        *start = temp;
        start++;
        end--;
    }
}

void itos(int i, char s[]) {
    int count = 0;
    do {
        s[count] = (char) digitChar(i % 10);
        i = i / 10;
        count++;
    } while (i > 0);
    s[count] = '\0';
    reverse(s, count);
}

int main(int argc, char *argv[]) {
    char s[1024];
    itos(0, s);
    printf("%s\n", s);
    itos(1, s);
    printf("%s\n", s);
    itos(42, s);
    printf("%s\n", s);
    itos(65535, s);
    printf("%s\n", s);
    return 0;
}
