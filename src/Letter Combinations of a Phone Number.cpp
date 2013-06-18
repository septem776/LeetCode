class Solution {
private:
    vector<string> result;
    map<char, string> m;
public:
    void dfs(int dep, int maxdep, string &s, string ans)
    {
        if(dep == maxdep)
        {
            result.push_back(ans);
            return;
        }
        for(int i=0; i<m[s[dep]].length(); i++)
        {
            dfs(dep+1, maxdep, s, ans+m[s[dep]][i]);
        }
    }
    vector<string> letterCombinations(string digits) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        result.clear();
        if(digits.length() == 0)
        {
            result.push_back("");
            return result;
        }
        m.insert(make_pair('2', "abc"));
        m.insert(make_pair('3', "def"));
        m.insert(make_pair('4', "ghi"));
        m.insert(make_pair('5', "jkl"));
        m.insert(make_pair('6', "mno"));
        m.insert(make_pair('7', "pqrs"));
        m.insert(make_pair('8', "tuv"));
        m.insert(make_pair('9', "wxyz"));
        dfs(0, digits.length(), digits, "");
            
        return result;
    }
};