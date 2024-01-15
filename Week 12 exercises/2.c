//////
////// Created by Maksym Andreiev on 11.12.2023.
//////
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
//int main() {
//    struct Node *l = newNode("left");
//    struct Node *r = newNode("right");
//    struct Node *root = newNode("root");
//    root->left = l;
//    root->right = r;
//    printf("%s\n", root->left->word);
//    printf("%s\n", root->right->word);
//    printf("%s\n", root->word);
//    return 0;
//}