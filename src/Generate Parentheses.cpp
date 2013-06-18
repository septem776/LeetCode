class Solution {
public:
    vector<string> generateParenthesis(int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        string tmp;
        tmp.clear();
        ret.clear();
        dfs(0, 0, 0, 0, n, tmp);
        return ret;
    }
    void dfs(int pos, int left_count, int right_count, int left_remain, int n, string tmp)
    {
        if(left_remain < 0 || left_count > n || right_count > n)
            return;
        if(pos ==  2*n)
        {
            if(left_count == n && right_count == n)
            {
                ret.push_back(tmp);
            }
            return;
        }
        tmp += '(';
        dfs(pos+1, left_count+1, right_count, left_remain+1, n, tmp);
    	tmp.pop_back();
        tmp += ')';
        dfs(pos+1, left_count, right_count+1, left_remain-1, n, tmp); 
		tmp.pop_back();       
    }
private:
    vector<string> ret;
};