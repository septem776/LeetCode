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
    void flatten(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(root == NULL)
            return;
        if(root->left)
        {
            TreeNode *tmp = root->left;
            while(tmp->right)
                tmp = tmp->right;
            tmp->right = root->right;
            root->right = root->left;
            root->left = NULL;            
        }
        flatten(root->right);
        return;
    }
    
};