#include <vector>
#include <iostream>
#include <stack>
#include <string>
#include <sstream>
using namespace std;

class Solution {
public:
	int climbStairs(int n) {
		vector<int> ret(n+1, 0);
		ret[0] = ret[1] = 1;
		for(int i=2; i<=n; i++)
		{
			ret[i] = ret[i-2] + ret[i-1];
		}
		return ret[n];
	}
};

int main()
{
	Solution so;
	
	return 0;
}