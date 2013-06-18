class Solution {
public:
    bool isPalindrome(int x) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(x<0)
            return false;
        string s1, s2;
        while(x>0)
        {
            s1 += x%10;
            x /= 10;
        }
        s2 = s1;
        reverse(s1.begin(), s1.end());
        if(s2 == s1)
            return true;
        else
            return false;
    }
};