class Solution {
public:
    vector<string> anagrams(vector<string> &strs) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        map<string, string> m1;
        map<string, int> m2;
        vector<string> ret;
        for(int i=0; i<strs.size(); i++)
        {
            string root = getRoot(strs[i]);
            m1.insert(make_pair(strs[i], root));
            if(m2.find(root) != m2.end())
            {
                m2[root] += 1;
            }
            else
            {
                m2[root] = 1;
            }
        }
        for(int i=0; i<strs.size(); i++)
        {
            string tmp = m1[strs[i]];
            if(m2[tmp] > 1)
                ret.push_back(strs[i]);
        }
        return ret;
    }
    string getRoot(const string s)
    {
        string tmp(s);
        sort(tmp.begin(), tmp.end());
        return tmp;
    }
};