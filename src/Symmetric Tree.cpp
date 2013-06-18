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
    bool isSymmetric(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(!root)
            return true;
        return complr(root->left, root->right);
    }
    
    bool complr(TreeNode *l, TreeNode *r)
    {
        if(!l && !r)
            return true;
        else if(l && r && l->val == r->val)
        {
            return complr(l->left, r->right) && complr(l->right, r->left);
        }
        else
            return false;
    }
};