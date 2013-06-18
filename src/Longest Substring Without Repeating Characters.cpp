class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int lastpos[256];
        memset(lastpos, -1, sizeof(lastpos));
        int maxlen = 0;
        if(s == "")
            return 0;
        if(s.length() == 1)
            return 1;
        int curlen = 0;
        int retpos = 0;
        for(int i=0; i<s.length(); i++)
        {
            if(lastpos[s[i]] == -1)
            {
                
                curlen++;
                if(curlen > maxlen)
                {
                    maxlen = curlen;
                }
                retpos = i - maxlen + 1;
            }
            else
            {
                if(i-lastpos[s[i]] > curlen)
                {
                    curlen++;
                    if(curlen > maxlen)
                        maxlen = curlen;
                }
                else
                {
                    curlen = i - lastpos[s[i]];
                }
            }
            lastpos[s[i]] = i;
        }
        return maxlen;
    }
};