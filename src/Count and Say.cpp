class Solution {
public:
    string countAndSay(int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        str = "1";
    	while(--n)
			str = transform(str);
		return str;

    }
    string transform(const string s)
    {
        string ret = "";
        int count = 1;
        for(int i=0; i<s.size(); i++)
        {
            char num = s[i];
            while(i+1 < s.size() && s[i+1] == s[i])
            {
                count++;
                i++;
            }
            ret += count + '0';
            ret += num;
            count = 1;
        }
        return ret;
    }
private:
	string str;
};