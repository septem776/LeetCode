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
    bool isBalanced(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(!root)
            return true;
        int diff = abs(maxHeight(root->left) - maxHeight(root->right));
        if(diff > 1)
            return false;
        return isBalanced(root->left) && isBalanced(root->right);
    }
    
    int maxHeight(TreeNode *root)
    {
        if(!root)
            return 0;
        if(!root->left && !root->right)
            return 1;
        return 1 + max(maxHeight(root->left), maxHeight(root->right));
    }


};