class Solution:
    # @param n, an integer
    # @return an integer
    def climbStairs(self, n):
        ret = [0] * (n+1)
        ret[0] = ret[1] = 1
        for i in range(2, n+1):
            ret[i] = ret[i-1] + ret[i-2]
        return ret[n]