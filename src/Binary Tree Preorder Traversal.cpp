#include <vector>
#include <iostream>
using namespace std;

//    Definition for binary tree
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
class Solution {
public:
    vector<int> preorderTraversal(TreeNode *root) {
        ans.clear();
        doTraversal(root);
        return ans;
    }

    void doTraversal(TreeNode *t) {
        if(t)
            ans.push_back(t->val);
        else
            return;
        if(t->left)
            doTraversal(t->left);
        if(t->right)
            doTraversal(t->right);
    }
private:
    vector<int> ans;
};

int main()
{
    Solution so;
    vector<int> ans;
    ans = so.preorderTraversal(NULL);
    for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<endl;
}