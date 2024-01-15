////
//// Created by Maksym Andreiev on 11.12.2023.
////
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define indexableSize(A) (sizeof(A) / sizeof(*(A)))
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
//
//int main() {
//    Node *root = 0;
//    char *words[] = {
//            "Peter", "Piper", "picked", "a", "peck", "of", "picked", "pepper",
//            "where", "is", "the", "peck", "that", "Peter", "Piper", "picked",
//    };
//    for (int i = 0; i < indexableSize(words); ++i) {
//        findNode(&root, words[i]);
//    }
//    printTree(root);
//    return 0;
//}