class Solution:
    # @param A a list of integers
    # @return nothing, sort in place
    def sortColors(self, A):
        end = len(A) - 1
        i = 0
        while i < end:
            if A[i] == 2:
                tmp = A[end]
                A[end] = A[i]
                A[i] = tmp
                end -= 1
                continue
            i += 1

        i = 0
        if A[end] == 2:
            end -= 1
        while i < end:
            if A[i] == 1:
                tmp = A[end]
                A[end] = A[i]
                A[i] = tmp
                end -= 1
                continue
            i += 1
        return