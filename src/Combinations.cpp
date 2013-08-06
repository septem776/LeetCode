class Solution {
public:
    vector<vector<int> > combine(int n, int k) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
    	vector<vector<int> > ret;
		vector<int> tmp;
		dfs(1, n, k, ret, tmp);
		return ret;
    }
	
	void dfs(int pos, int n, int k, vector<vector<int> > &ret, vector<int> &tmp)
	{
		if(tmp.size() == k)
		{
			ret.push_back(tmp);
			return;
		}
		for(int i=pos; i<=n; i++)
		{
			tmp.push_back(i);
			dfs(i+1, n, k, ret, tmp);
			tmp.pop_back();
		}
		
	}
};