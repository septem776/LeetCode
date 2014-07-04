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
    int sumNumbers(TreeNode *root) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        if(!root)
            return 0;
        int res = 0;
        dfs(root, res);
        return res;
    }
    
    void dfs(TreeNode *node, int &sum)
    {
        if(!node)
            return;
        sum = sum * 10 + node->val;
        if(!node->left && !node->right)
            return;
        int tmp1 = sum;
        int tmp2 = tmp1;
        if(node->left && node->right)
        {
            dfs(node->left, tmp1);
            dfs(node->right, tmp2);
            sum = tmp1 + tmp2;
        }
        else if(node->left)
        {
            dfs(node->left, sum);
        }
        else if(node->right)
        {
            dfs(node->right, sum);
        }
    }
};