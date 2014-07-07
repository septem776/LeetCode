class Solution:
    # @param A a list of integers
    # @return an integer
    def removeDuplicates(self, A):
        count = 0
        i = 0
        length = len(A)
        while i < length:
            if i == 0 or A[i] == A[i-1]:
                count += 1
            elif i > 0 and A[i] != A[i-1]:
                count = 1

            if count > 2:
                A.pop(i)
                length = len(A)
            else:
                i += 1

        return len(A)
