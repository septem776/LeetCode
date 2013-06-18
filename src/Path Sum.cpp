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
    bool hasPathSum(TreeNode *root, int sum) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(root == NULL)
            return false;
        if(root->left == NULL && root->right == NULL)
        {
            if(root->val == sum)
            {
                return true;
            }
            return false;
        }
        bool ret = false;
        if(root->left)
        {
            ret = hasPathSum(root->left, sum-root->val);
        }
        if(!ret && root->right)
        {
            ret = hasPathSum(root->right, sum-root->val);
        }
        return ret;
        
    }
};