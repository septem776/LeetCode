class Solution:
    # @return an integer
    def numTrees(self, n):
        ret = [0] * (n+1)
        ret[0] = ret[1] = 1
        for i in range(2, n+1):
            for j in range(0, i):
                ret[i] += ret[j] * ret[i-j-1]
        return ret[n]

if __name__ == '__main__':
	so = Solution()
	print so.numTrees(2)
