class Solution {
public:
    vector<vector<string>> findLadders(string start, string end, unordered_set<string> &dict) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<vector<string> > ret;
        queue<pair<string, int> > que;
        unordered_map<string, vector<string> > parent;
        unordered_map<string, int> layer;
        que.push({start, 1});
        parent[start].push_back(start);
        layer[start] = 1;
        int ladder_len = -1;
        while(!que.empty())
        {
            string str(que.front().first);
            int len = que.front().second;
            que.pop();
            
            if(ladder_len > 0 && len >= ladder_len)
                break;
            
            for(int i=0; i<str.size(); i++)
            {
                for(char j='a'; j<='z'; j++)
                {
                    if(str[i] == j)
                        continue;
                    string tmp(str);
                    tmp[i] = j;
                    if(tmp == end)
                    {
                        ladder_len = len + 1;
                        vector<string> v;
                        v.push_back(end);
                        v.push_back(str);
                        getLadder(ret, parent, v, str);
                    }
                    else if(dict.count(tmp) == 0)
                        continue;
                    else if(parent.count(tmp) == 0)
                    {
                        parent[tmp].push_back(str);
                        layer[tmp] = len + 1;
                        que.push({tmp, len + 1});
                    }
                    else if(layer[tmp] == len + 1)
                    {
                        parent[tmp].push_back(str);
                    }
                }
            }
        }
        return ret;
    }
    
    void getLadder(vector<vector<string> > &ret, unordered_map<string, vector<string> > &parent, vector<string> &v, string str)
    {
        if(parent[str].size() == 1 && parent[str][0] == str)
        {
            ret.push_back(vector<string>(v.rbegin(), v.rend()));
        }
        else
        {
            for(string s : parent[str])
            {
                v.push_back(s);
                getLadder(ret, parent, v, s);
                v.pop_back();
            }
        }
    }
};