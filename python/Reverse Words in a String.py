class Solution:
    # @param s, a string
    # @return a string
    def reverseWords(self, s):
        lword = s.split()
        lword.reverse()
        return ' '.join(lword)

if __name__ == '__main__':
    so = Solution()
    s = "test the word"
    print(so.reverseWords(s))