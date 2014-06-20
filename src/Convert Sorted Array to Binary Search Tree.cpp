#include <vector>
#include <iostream>
#include <stack>
#include <string>
#include <sstream>
using namespace std;


// Definition for binary tree
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
class Solution {
public:
    TreeNode *sortedArrayToBST(vector<int> &num) {
		if(num.empty())
			return NULL;

        TreeNode *root = constructTree(num, 0, num.size() - 1);
		return root;
    }

	TreeNode *constructTree(vector<int> &num, int left, int right) {
		if(left > right)
			return NULL;
		int mid = (left + right) / 2;
		TreeNode *node = new TreeNode(num[mid]);
		if(mid == right)
			return node;
		if(mid == left)
		{
			node->right = constructTree(num, mid+1, right);
			return node;
		}

		node->left = constructTree(num, left, mid-1);
		node->right = constructTree(num, mid+1, right);
		return node;
	}
};

int main()
{
	Solution so;
	vector<int> num;
	num.push_back(1);
	num.push_back(3);
	so.sortedArrayToBST(num);
	return 0;
}