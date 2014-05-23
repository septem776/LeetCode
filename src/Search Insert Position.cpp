#include <string>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <queue>
#include <limits.h>
using namespace std;

class Solution {
public:
    int searchInsert(int A[], int n, int target) {
        for(int i=0; i<n; i++)
        {
            if(A[i] >= target)
                return i;
        }
        return n;
    }
};

int main()
{
    Solution s;
    return 0;
}
