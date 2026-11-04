//binary tree using linked list in c
#include <stdio.h>
#include <stdlib.h>

//structure for a tree node
struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

// create new tree node function
struct TreeNode* createNode(int data) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// print tree in tree like format
void printTree(struct TreeNode* root, int level) {
    if (root == NULL) {
        return;
    }

    printTree(root->right, level + 1);
    for (int i = 0; i < level; i++) {
        printf("   ");
    }
    printf("%d\n", root->data);
    printTree(root->left, level + 1);
}

int main() {
    struct TreeNode* root = NULL;

    // Insert nodes in binary tree
    root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    printf("Binary Tree \n");
    printTree(root, 0);

    return 0;
}
