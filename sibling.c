// c program for to print the nodes that have nol sibling
//may 6th geeks for geeks todays problem
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return(node);
}

void printNodesWithoutSiblings(struct Node* node) {
    if (node == NULL)
        return;
    if (node->left != NULL && node->right == NULL)
        printf("%d ", node->left->data);
    if (node->left == NULL && node->right != NULL)
        printf("%d ", node->right->data);
    printNodesWithoutSiblings(node->left);
    printNodesWithoutSiblings(node->right);
}

int main() {
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->right = newNode(4);
    root->right->left = newNode(5);
    root->right->left->left = newNode(6);
    printf("Nodes without siblings are: ");
    printNodesWithoutSiblings(root);
    return 0;
}

