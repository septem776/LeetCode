class Solution {
public:
    int minPathSum(vector<vector<int> > &grid) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        memset(dp, 0, sizeof(dp));
        dp[0][0] = grid[0][0];
        int m = grid.size();
        int n = grid[0].size();
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i == 0 && j > 0)
                    dp[i][j] = dp[i][j-1] + grid[i][j];
                if(j == 0 && i > 0)
                    dp[i][j] = dp[i-1][j] + grid[i][j];
                if(i > 0 && j > 0)
                    dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j];
            }
        }
        return dp[m-1][n-1];
    }
    
private:
    int dp[1000][1000];
};