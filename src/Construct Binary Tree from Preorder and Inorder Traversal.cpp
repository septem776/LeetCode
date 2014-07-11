//Definition for binary tree
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    typedef vector<int>::iterator Iter;
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
        return buildSubtree(inorder.begin(), inorder.end(), preorder.begin(), preorder.end());
    }

    TreeNode *buildSubtree(Iter istart, Iter iend, Iter pstart, Iter pend)
    {
        if(istart == iend)
            return NULL;

        int rootval = *pstart;
        Iter it = find(istart, iend, rootval);
        TreeNode *root = new TreeNode(rootval);
        root->left = buildSubtree(istart, it, pstart + 1, pend);
        root->right = buildSubtree(it+1, iend, pstart + (it - istart) + 1, pend);
        return root;
    }
};