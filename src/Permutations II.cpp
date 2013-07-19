class Solution {
public:
    vector<vector<int> > permuteUnique(vector<int> &num) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<vector<int> > ret;
        if(num.empty())
            return ret;
        vector<int> tmp;
        vector<bool> visited(num.size(), false);
        sort(num.begin(), num.end());
        dfs(0, tmp, ret, num, visited);
        return ret;
    }
    
    void dfs(int dep, vector<int> &tmp, vector<vector<int> > &ret, vector<int> num, vector<bool> &visited)
    {
        if(dep == num.size())
        {
            ret.push_back(tmp);
            return;
        }
        
        for(int i=0; i<num.size(); i++)
        {
            if(!visited[i])
            {
                if(i>0 && num[i] == num[i-1] && !visited[i-1])
                    continue;
                visited[i] = true;
                tmp.push_back(num[i]);
                dfs(dep+1, tmp, ret, num, visited);
                tmp.pop_back();
                visited[i] = false;
            }
        }
    }
};