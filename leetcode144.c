void traverse(struct TreeNode* root, int* result, int* index) {
    if (root == NULL)
        return;

    result[(*index)++] = root->val;          // Visit root
    traverse(root->left, result, index);     // Visit left subtree
    traverse(root->right, result, index);    // Visit right subtree
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int* result = (int*)malloc(1000 * sizeof(int)); // Pre-allocate space
    int index = 0;

    traverse(root, result, &index);

    *returnSize = index;
    return result;
}