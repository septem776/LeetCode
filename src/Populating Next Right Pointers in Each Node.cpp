/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        if(!root)
            return;
        queue<pair<TreeLinkNode *, int> > que;
		int layer = 0;
        if(root)
        {
            que.push(make_pair(root, layer));
        }
		vector<pair<TreeLinkNode *, int> > vec;
		while(!que.empty())
		{
			pair<TreeLinkNode *, int> tmp(que.front());
			vec.push_back(tmp);
			if(tmp.first->left)
			{
				que.push(make_pair(tmp.first->left, tmp.second+1));
			}
			if(tmp.first->right)
			{
				que.push(make_pair(tmp.first->right, tmp.second+1));
			}
			que.pop();
		}
		for(int i=0; i<vec.size()-1; i++)
		{
			if(vec[i].second == vec[i+1].second)
			{
				vec[i].first->next = vec[i+1].first;
			}
			else
			{
				vec[i].first->next = NULL;
			}
		}
		vec[vec.size()-1].first->next = NULL;
    }
};