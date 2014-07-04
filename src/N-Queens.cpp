class Solution {
public:
	vector<vector<string> > solveNQueens(int n) {
		// Start typing your C/C++ solution below
		// DO NOT write int main() function
		vector<vector<string> > ret;
		vector<int> oneAns(n, -1);
		solve(ret, 0, n, oneAns);
		return ret;
	}

	bool isOK(vector<int> oneAns, int toadd, int k)
	{
		for(int i=0; i<k; i++)
		{
			if(oneAns[i] == toadd)
				return false;
			else if(abs(i-k) == abs(oneAns[i] - toadd))
				return false;
		}
		return true;
	}

	void solve(vector<vector<string> > &ret, int k, int n, vector<int> &oneAns)
	{
		if(k == n)
		{
			vector<string> tmp(n, "");
			for(int i=0; i<n; i++)
			{

				for(int j=0; j<n; j++)
				{
					if(oneAns[i] == j)
						tmp[i].push_back('Q');
					else
						tmp[i].push_back('.');
				}
			}
			ret.push_back(tmp);
		}

		else
		{
			k++;
			for(int i=0; i<n; i++)
			{
				if(!isOK(oneAns, i, k-1))
					continue;
				oneAns[k-1] = i;
				solve(ret, k, n, oneAns);
			}
		}
	}
};