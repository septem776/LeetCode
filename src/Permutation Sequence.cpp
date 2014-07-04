class Solution {
public:
    string getPermutation(int n, int k) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<int> num(n);
		int count = 1;
		for(int i=0; i<n; i++)
		{
			num[i] = i+1;
			count *= (i+1);
		}
		
		k--;
		string ret;
		for(int i=0; i<n; i++)
		{
			count = count / (n-i);
			int choose = k / count;
			ret.push_back(num[choose] + '0');
			for(int j=choose; j<n-i; j++)
			{
				num[j] = num[j+1];
			}
			k %= count;
		}
		return ret;
    }
};