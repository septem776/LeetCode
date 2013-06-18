class Solution {
public:
    bool isPalindrome(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        string tmp;
        tmp.clear();
        for(int i=0; i<(int)s.size(); i++)
        {
            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9'))
            {
                if(s[i]>='A' && s[i]<='Z')
                    s[i] += 32;
                tmp+=s[i];
            }
        }
        bool ans = true;
        int len = tmp.size();
        for(int i=0; i<len/2; i++)
        {
            if(tmp[i] != tmp[len-1-i])
            {
                ans = false;
                break;
            }
        }
        return ans;
    }
};