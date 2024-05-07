/*94. Binary Tree Inorder Traversal
Solved
Easy
Topics
Companies
Given the root of a binary tree, return the inorder traversal of its nodes' values.

 

Example 1:


Input: root = [1,null,2,3]
Output: [1,3,2]
Example 2:

Input: root = []
Output: []
Example 3:

Input: root = [1]
Output: [1]
 

Constraints:

The number of nodes in the tree is in the range [0, 100].
-100 <= Node.val <= 100*/

#include <stdio.h>
#include <stdlib.h>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

// Function to perform inorder traversal of a binary tree
void inorderTraversalHelper(struct TreeNode* root, int* result, int* index) {
    if (root == NULL) {
        return;
    }
    
    inorderTraversalHelper(root->left, result, index);
    result[*index] = root->val;
    (*index)++;
    inorderTraversalHelper(root->right, result, index);
}

// Wrapper function for inorder traversal
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    if (root == NULL) {
        *returnSize = 0;
        return NULL;
    }
    
    // Allocate memory for the result array
    int* result = (int*)malloc(sizeof(int) * 1000); // Assuming a maximum of 1000 nodes
    if (result == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    
    // Perform inorder traversal and populate the result array
    *returnSize = 0; // Reset returnSize to 0
    inorderTraversalHelper(root, result, returnSize);
    
    return result;
}

// Function to create a new binary tree node
struct TreeNode* createNode(int val) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->val = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to free the memory allocated for a binary tree
void freeTree(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }
    freeTree(root->left);
    freeTree(root->right);
    free(root);
}

// Test the functions
int main() {
    // Create a binary tree
    struct TreeNode* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    // Perform inorder traversal
    int returnSize;
    int* result = inorderTraversal(root, &returnSize);

    // Print the inorder traversal result
    printf("Inorder Traversal: ");
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    // Free memory allocated for the binary tree and result array
    freeTree(root);
    free(result);

    return 0;
}
