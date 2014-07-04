class Solution {
public:
    vector<vector<int> > combinationSum(vector<int> &candidates, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<vector<int> > ret;
        vector<int>::iterator it;
        sort(candidates.begin(), candidates.end());
        it = unique(candidates.begin(), candidates.end());
        candidates.resize(it - candidates.begin());
        vector<int> comb;
        findSubset(candidates.begin(), candidates.end(), comb, target, ret);
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
        for(it = first; it != last && *it <= target; it++)
        {
            comb.push_back(*it);
            findSubset(it, last, comb, target - *it, ret);
            comb.pop_back();
        }
    }
};