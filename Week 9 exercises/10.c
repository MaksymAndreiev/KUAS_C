//
// Created by Maksym Andreiev on 19.11.2023.
//

#include <stdio.h>

char *rot13(char *s) {
    char *copy_s = s;
    while (*s) {
        char c = *s;

        if (c >= 'a' && c <= 'z') {
            // start of lower case + 13
            // result is wrapped within the range of the alphabet
            *s = ((c - 'a' + 13) % 26) + 'a';
        } else if (c >= 'A' && c <= 'Z') {
            *s = ((c - 'A' + 13) % 26) + 'A';
        }
        s++;
    }
    return copy_s;
}


int main() {
    char s[] =
            "Fvzcyvpvgl naq ryrtnapr ner hacbchyne orpnhfr gurl erdhver uneq jbex naq "
            "qvfpvcyvar gb npuvrir naq rqhpngvba gb or nccerpvngrq. -- Rqftre Qvwxfgen";
    printf("%s\n", rot13(s));
    return 0;
}