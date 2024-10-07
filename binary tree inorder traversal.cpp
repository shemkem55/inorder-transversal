#include <iostream>
#include <vector>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to perform inorder traversal
void inorderTraversal(TreeNode* root, vector<int>& result) {
    if (root == nullptr) return; // Base case

    inorderTraversal(root->left, result); // Visit left subtree
    result.push_back(root->val); // Visit root
    inorderTraversal(root->right, result); // Visit right subtree
}

// Main function to return inorder traversal of the tree
vector<int> inorder(TreeNode* root) {
    vector<int> result;
    inorderTraversal(root, result);
    return result;
}

// Example usage
int main() {
    // Create a sample binary tree:
    //       1
    //      / \
    //     2   3
    //    / \
    //   4   5
    
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    vector<int> result = inorder(root);
    
    cout << "Inorder traversal of binary tree is: ";
    for (int val : result) {
        cout << val << " ";
    }
    
    // Clean up memory (not shown for brevity)
    
    return 0;
}