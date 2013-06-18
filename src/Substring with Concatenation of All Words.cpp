class Solution {
public:
    vector<int> findSubstring(string S, vector<string> &L) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        map<string, int> words;
        map<string, int> cur;
        vector<int> ret;
        ret.clear();
        int m = L[0].size();
        words.clear();
        cur.clear();
        int n = L.size();
        for(int i=0; i<n; i++) {
            ++words[L[i]];
        }
        int len = m*n;
        for(int i=0; i+len <= S.size(); i++) {
            cur.clear();
            int j = 0;
            for(j=0; j<n; j++) {
                string tmp = S.substr(i+j*m, m);
                if(words.find(tmp) == words.end())
                    break;
                ++cur[tmp];
                if(cur[tmp] > words[tmp])
                    break;
            }
            if(j == n)
                ret.push_back(i);
        }
        return ret;
        
    }
};