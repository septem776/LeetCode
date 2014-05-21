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
    vector<int> postorderTraversal(TreeNode *root) {
        ans.clear();
        doTraversal(root);
        return ans;
    }

    void doTraversal(TreeNode *t) {
        if(!t)
            return;
        if(t->left)
            doTraversal(t->left);
        if(t->right)
            doTraversal(t->right);
        ans.push_back(t->val);
    }
private:
    vector<int> ans;
};