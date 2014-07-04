/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        return isBST(root, INT_MIN, INT_MAX);
    }
    bool isBST(TreeNode *node, int min, int max)
    {
        if(!node)
            return true;
        if(node->left && node->left->val >= max)
            return false;
        if(node->right && node->right->val <= min)
            return false;
        return node->val < max && node->val > min && isBST(node->left, min, node->val) && isBST(node->right, node->val, max);
    }
};