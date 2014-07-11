class Solution {
public:
    string longestPalindrome(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        for(int i=0; i<s.size(); i++)
        {
            for(int j=0; j<s.size(); j++)
            {
                if(i >= j)
                    dp[i][j] = true;
                else
                    dp[i][j] = false;
            }
        }
        int maxlen = 0;
        int start = 0, end = 0;
        for(int k=1; k<s.size(); k++)
        {
            for(int i=0; i+k<s.size(); i++)
            {
                int j = i+k;
                if(s[i] != s[j])
                    dp[i][j] = false;
                else
                {
                    dp[i][j] = dp[i+1][j-1];
                    if(dp[i][j])
                    {
                        if(k+1 > maxlen)
                        {
                            maxlen = k+1;
                            start = i;
                            end = j;
                        }
                    }
                }
            }
        }
        return s.substr(start, end-start+1);
    }
private:
    bool dp[1001][1001];
};