class Solution:
    # @param A, a list of integers
    # @return an integer
    def maxSubArray(self, A):
        n = len(A)
        dp = [0] * n
        dp[0] = A[0]
        maxsum = dp[0]
        for i in range(1, n):
            dp[i] = max(dp[i-1] + A[i], A[i])
            if dp[i] > maxsum:
                maxsum = dp[i]
        return maxsum