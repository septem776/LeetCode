class Solution {
public:
    int longestValidParentheses(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int n = s.size();
        int *dp = new int[n+1];
        memset(dp, 0, (n+1)*sizeof(int));
        int ret = 0;
        for(int i=n-2; i>=0; i--)
        {
            if(s[i] == '(')
            {
                int j = i+1+dp[i+1];
                if(j<n && s[j] == ')')
                {
                    dp[i] = 2+dp[i+1]+dp[j+1];                    
                }
                
            }
            
            if(ret < dp[i])
                ret = dp[i];
        }
        return ret;
            
    }
};