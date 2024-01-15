////
//// Created by Maksym Andreiev on 11.12.2023.
////
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
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
//
//int main() {
//    struct Node *root = 0;
//    findNode(&root, "middle");
//    findNode(&root, "left");
//    findNode(&root, "right");
//    printf("%s\n", findNode(&root, "left")->word);
//    printf("%s\n", findNode(&root, "middle")->word);
//    printf("%s\n", findNode(&root, "right")->word);
//    return 0;
//}