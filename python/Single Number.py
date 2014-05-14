class Solution:
    # @param A, a list of integer
    # @return an integer
    def singleNumber(self, A):
        ret = 0
        for i in range(len(A)):
            ret ^= A[i]

        return ret
