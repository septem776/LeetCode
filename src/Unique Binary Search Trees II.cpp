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
    vector<TreeNode *> generateTrees(int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(n == 0)
            return generate(1,0);
        return generate(1, n);
    }
    vector<TreeNode *> generate(int begin, int end)
    {
        vector<TreeNode *> ret;
        if(begin > end)
        {
            ret.push_back(NULL);
            return ret;
        }
        
        for(int i=begin; i<=end; i++)
        {
            vector<TreeNode *> leftTree = generate(begin, i-1);
            vector<TreeNode *> rightTree = generate(i+1, end);
            for(int j=0; j<leftTree.size(); j++)
            {
                for(int k=0; k<rightTree.size(); k++)
                {
                    TreeNode *node = new TreeNode(i);
                    node->left = leftTree[j];
                    node->right = rightTree[k];
                    ret.push_back(node);
                }
            }
        }
        return ret;
    }
};