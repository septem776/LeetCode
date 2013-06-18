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
    vector<vector<int> > pathSum(TreeNode *root, int sum) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        ans.clear();
        hasPathSum(root, sum);
        return ans;
    }
    void hasPathSum(TreeNode *root, int sum) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(root == NULL)
            return ;
        tmp.push_back(root->val);
        if(root->left == NULL && root->right == NULL)
        {
            if(root->val == sum)
            {
                ans.push_back(tmp);
            }    
        }        
        hasPathSum(root->left, sum-root->val);
        hasPathSum(root->right, sum-root->val);
        tmp.pop_back();
    }
private:
    vector<vector<int> > ans;
    vector<int> tmp;
};