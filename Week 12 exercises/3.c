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
//Node *findNode(Node *tree, char *word) {
//    if (tree == 0) {
//        return 0;
//    }
//    int t = strcmp(word, tree->word);
//    if (t == 0) { //equal
//        return tree;
//    } else if (t < 0) { //str1 is lower str2
//        return findNode(tree->left, word);
//    } else { //str1 is greater str1
//        return findNode(tree->right, word);
//    }
//}
//
//
//int main() {
//    struct Node *l = newNode("left");
//    struct Node *r = newNode("right");
//    struct Node *root = newNode("middle");
//    root->left = l;
//    root->right = r;
//    printf("%s\n", findNode(root, "left")->word);
//    printf("%s\n", findNode(root, "middle")->word);
//    printf("%s\n", findNode(root, "right")->word);
//    printf("%p\n", findNode(root, "none"));
//    return 0;
//}