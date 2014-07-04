#include <string>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <queue>
#include <limits.h>
#include <stdio.h>
#include <string.h>
using namespace std;

class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int> > ret;
        for(int i = 0; i < numRows; i++)
        {
            vector<int> e;
            for(int j = 0; j <= i; j++)
            {
                if(j == 0 || j == i)
                    e.push_back(1);
                else
                    e.push_back(ret[i-1][j-1] + ret[i-1][j]);
            }
            ret.push_back(e);
        }
        return ret;
    }
};

int main()
{
    Solution so;
    so.generate(1);
    return 0;
}
