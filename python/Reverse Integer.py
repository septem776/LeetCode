class Solution:
    # @return an integer
    def reverse(self, x):
        if x == 0:
            return 0
        s = str(x)
        if x > 0 :
            s = s[-1::-1]
            return int(s)
        else :
            s = s[-1:0:-1]
            return -int(s)