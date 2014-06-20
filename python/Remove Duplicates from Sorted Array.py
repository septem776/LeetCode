class Solution:
    # @param a list of integers
    # @return an integer
    def removeDuplicates(self, A):
        if len(A) == 0 or len(A) == 1:
            return len(A)

        ret = 0
        old = A[0]
        pre = 0
        for i in range(1, len(A)):
            if A[i] != old:
                old = A[i]
                pre += 1
                tmp = A[pre]
                A[pre] = A[i]
                A[i] = tmp
                ret += 1

        return ret + 1 
