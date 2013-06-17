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
    vector<int> inorderTraversal(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        ans.clear();
        doTraversal(root);
        return ans;
    }
    
    void doTraversal(TreeNode *node)
    {
        if(!node)
            return;
        if(node->left)
            doTraversal(node->left);
        ans.push_back(node->val);
        if(node->right)
            doTraversal(node->right);
    }
private:
    vector<int> ans;
};