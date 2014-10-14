#include <vector>
#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <unordered_map>
#include <algorithm>
#include <iomanip>
#include <stdio.h>
using namespace std;

class Solution {
public:
    string minWindow(string S, string T) {
        unordered_map<char, int> needToFind;
        for(int i=0; i<T.size(); i++)
        {
            needToFind[T[i]]++;
        }
        int start = 0, end = 0;
        int count = 0;
        while(start < S.size() && needToFind.find(S[start]) == needToFind.end())
            start++;

        string ret = S;
        bool bFound = false;
        for(end = start; end < S.size(); end++)
        {
            if(needToFind.find(S[end]) != needToFind.end())
            {
                needToFind[S[end]]--;
                if(needToFind[S[end]] >= 0)
                    count++;
            }
            if(count == T.size())
            {
                bFound = true;
            }

            if(bFound)
            {
                while(start < end && (needToFind.find(S[start]) == needToFind.end() || needToFind[S[start]] < 0))
                {
                    if(needToFind[S[start]] < 0)
                        needToFind[S[start]]++;
                    start++;
                }
                if(end - start + 1 < ret.size())
                    ret = S.substr(start, end - start + 1);
                break;
            }
        }

        if(!bFound)
            return "";

        while(start < end)
        {
            needToFind[S[start]]++;
            if(needToFind[S[start]] > 0)
                count--;
            start++;
            while(count != T.size())
            {
                
            }
        }

        return ret;
    }
};

int main()
{
    Solution so;
    cout<< so.minWindow("ADOBECODEBANC", "ABC") << endl;
    return 0;
}