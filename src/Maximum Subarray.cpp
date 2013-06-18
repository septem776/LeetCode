class Solution {
public:
    int maxSubArray(int A[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(n == 0)
            return 0;
        dp = new int[n];
        dp[0] = A[0];
        int maxsum = dp[0];
        for(int i=1; i<n; i++)
        {
            dp[i] = max(dp[i-1]+A[i], A[i]);
            if(dp[i] > maxsum)
                maxsum = dp[i];
        }
        return maxsum;
    }
private:
    int *dp;
};