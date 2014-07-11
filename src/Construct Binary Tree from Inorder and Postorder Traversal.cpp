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

    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder) {
        return buildSubTree(inorder.begin(), inorder.end(), postorder.begin(), postorder.end());
    }

    TreeNode *buildSubTree(Iter istart, Iter iend, Iter pstart, Iter pend) {
        if(istart == iend)
            return NULL;

        int rootval = *(pend - 1);
        TreeNode *root = new TreeNode(rootval);
        Iter it = find(istart, iend, rootval);
        root->left = buildSubTree(istart, it, pstart, pend - (iend - it));
        root->right = buildSubTree(it + 1, iend, pstart, pend - 1);
        return root;
    }
};