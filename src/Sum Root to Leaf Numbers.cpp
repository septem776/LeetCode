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
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int sum = 0, path = 0;
        dosum(root, sum, path);
        return sum;
    }
    
    void dosum(TreeNode *node, int &sum, int path)
    {
        if(!node)
            return;
        path = path * 10 + node->val;
        if(node->left == NULL && node->right == NULL)
        {
            sum += path;
            return;
        }
        dosum(node->left, sum, path);
        dosum(node->right, sum, path);
        
    }
};