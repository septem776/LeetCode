class Solution:
    # @return a list of integers
    def grayCode(self, n):
        num = 1 << n
        ret = []
        for i in range(0, num):
            ret.append((i >> 1) ^ i)
        return ret