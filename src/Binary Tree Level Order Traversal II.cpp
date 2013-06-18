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
    vector<vector<int> > levelOrderBottom(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
         vector<vector<int> > ret;
        if(!root)
            return ret;
        vector<int> eachlevel;
        int level = 0;
        queue<pair<int, TreeNode*> > q;
        q.push(make_pair(0, root));
        while(!q.empty())
        {
            TreeNode *cur_node = q.front().second;
            int cur_level = q.front().first;
            q.pop();
            if(cur_level == level)
                eachlevel.push_back(cur_node->val);
            else
            {
                level++;
                ret.push_back(eachlevel);
                eachlevel.clear();
                eachlevel.push_back(cur_node->val);
            }
            if(cur_node->left)
                q.push(make_pair(cur_level+1, cur_node->left));
            if(cur_node->right)
                q.push(make_pair(cur_level+1, cur_node->right));
        }
        ret.push_back(eachlevel);
        reverse(ret.begin(), ret.end());
        return ret;
    }
};