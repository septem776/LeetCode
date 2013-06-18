class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(strs.empty())
            return "";
        if(strs.size() == 1)
            return strs[0];
        string result;
        string s1 = strs[0];
        int i = 0;
        while(i < s1.length())
        {
            char tmp = s1[i];
            int j = 1;
            while(j < strs.size())
            {
                string s2 = strs[j];
                if(s2.length() == 0)
                    return "";
                if(i >= s2.length())
                    return result;
                if(s2[i] != tmp)
                    return result;
                j++;
            }
            result.push_back(tmp);
            i++;
        }
        return result;
        
    }
};