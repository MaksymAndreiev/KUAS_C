////
//// Created by Maksym Andreiev on 11.12.2023.
////
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <ctype.h>
//
//typedef struct Node Node;
//
//struct Node {
//    char *word;
//    Node *left;
//    Node *right;
//};
//
//Node *newNode(char *word) {
//    Node *node= malloc(sizeof(Node));
//    node->word = strdup(word);
//    node->left = node->right = 0;
//    return node;
//}
//
//Node *findNode(Node **treep, char *word) {
//    Node *tree = *treep;
//    if (tree == 0) {
//        *treep = newNode(word);
//        return *treep;
//    }
//    int t = strcmp(word, tree->word);
//    if (t == 0) {
//        return tree;
//    } else if (t < 0) {
//        return findNode(&(tree->left), word);
//    } else {
//        return findNode(&(tree->right), word);
//    }
//}
//
//void printTree(Node *tree) {
//    if (tree == 0) {
//        return;
//    }
//    printTree(tree->left);
//    printf("%s ", tree->word);
//    printTree(tree->right);
//}
//
//int getword(char word[], int size) {
//    int c, i = 0;
//    while ((c = getchar()) != EOF && !isalpha(c));
//    while (c != EOF && isalpha(c)) {
//        if (i < size - 1) {
//            word[i++] = (char)c;
//        }
//        c = getchar();
//    }
//
//    if (i < size) {
//        word[i] = '\0';
//    } else {
//        word[size - 1] = '\0';
//    }
//    return i;
//}
//
//int main() {
//    Node *root = 0;
//    char word[10];
//
//    while (getword(word, sizeof(word))) {
//        findNode(&root, word);
//    }
//    printTree(root);
//    return 0;
//}
