class Solution {
public:
    vector<vector<int> > subsets(vector<int> &S) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
    	vector<vector<int> > ret;
		vector<int> tmp;
        sort(S.begin(), S.end());
		for(int i=0; i<=S.size(); i++)
		{
			dfs(0, i, S, ret, tmp);
		}
		return ret;
    }
	
	void dfs(int pos, int target, vector<int> S, vector<vector<int> >&ret, vector<int> &tmp)
	{
		if(tmp.size() == target)
		{
			ret.push_back(tmp);
			return;
		}
		
		for(int i=pos; i<S.size(); i++)
		{
			tmp.push_back(S[i]);
			dfs(i+1, target, S, ret, tmp);
			tmp.pop_back();
		}
	}
};