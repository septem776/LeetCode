class Solution {
public:
    int lengthOfLastWord(const char *s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        string str(s);
    	reverse(str.begin(), str.end());
		int start=0, end=0;
		while(str[start] == ' ')
			start++;
		end = start;
		while(end != str.size() && str[end] != ' ')
			end++;
		return end-start;
    }
};