class Solution {
public:
    vector<vector<int> > combinationSum2(vector<int> &candidates, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<vector<int> > ret;
        vector<vector<int> >::iterator it;
        sort(candidates.begin(), candidates.end());
        //it = unique(candidates.begin(), candidates.end());
        //candidates.resize(it - candidates.begin());
        vector<int> comb;
        findSubset(candidates.begin(), candidates.end(), comb, target, ret);
        sort(ret.begin(), ret.end());
        it = unique(ret.begin(), ret.end());
        ret.resize(it - ret.begin());
        return ret;
    }
    
    void findSubset(vector<int>::iterator first, vector<int>::iterator last, vector<int> &comb, int target, vector<vector<int> > &ret)
    {
        if(target == 0)
        {
            ret.push_back(comb);
        }
        if(target < 0)
            return;
        vector<int>::iterator it;
        for(it = first; it != last && *it <= target; )
        {
            comb.push_back(*it);
            int next = target - *it;
            it++;
            findSubset(it, last, comb, next, ret);
            comb.pop_back();
        }
    }
};