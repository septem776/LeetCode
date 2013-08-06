class Solution {
private:
	int oneAns[100];
	bool canuse[100];
public:
	int totalNQueens(int n) {
		// Start typing your C/C++ solution below
		// DO NOT write int main() function
		int ret = 0;
		memset(oneAns, 0, sizeof(oneAns));
		memset(canuse, true, sizeof(canuse));
		solve(ret, 0, n);
		return ret;
	}

	bool isOK(int toadd, int k)
	{
		for(int i=0; i<k; i++)
		{
			//if(oneAns[i] == toadd)
			//	return false;
			if(abs(i-k) == abs(oneAns[i] - toadd))
				return false;
		}
		return true;
	}

	void solve(int &count, int k, int n)
	{
		if(k == n)
		{
			count++;
			return;
		}

		else
		{
			for(int i=0; i<n; i++)
			{
				if(canuse[i] && isOK(i, k))
				{
					canuse[i] = false;
					oneAns[k] = i;
					solve(count, k+1, n);
					canuse[i] = true;
				}
			}
		}
	}
};