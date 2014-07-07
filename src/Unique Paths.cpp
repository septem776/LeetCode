class Solution {
public:
    int uniquePaths(int m, int n) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        memset(dp, 0, sizeof(dp));
        for(int i=0; i<m; i++)
        {
            dp[i][0] = 1;
        }
        for(int i=0; i<n; i++)
        {
            dp[0][i] = 1;
        }
        for(int i=1; i<m; i++)
        {   
            for(int j=1; j<n; j++)
            {
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        return dp[m-1][n-1];
    }
    
private:
    int dp[101][101];
};