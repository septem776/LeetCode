class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        dp[0][0] = 1;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(obstacleGrid[i][j] == 1)
                    dp[i][j] = 0;
                else
                {
                    if(i == 0 && j > 0)
                        dp[i][j] = dp[i][j-1];
                    if(j == 0 && i > 0)
                        dp[i][j] = dp[i-1][j];
                    if(i > 0 && j > 0)
                        dp[i][j] = dp[i-1][j] + dp[i][j-1];
                }
            }
        }
        return dp[m-1][n-1];
    }
private:
    int dp[1000][1000];
};