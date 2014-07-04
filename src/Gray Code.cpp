class Solution {
public:
    vector<int> grayCode(int n) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        vector<int> ret;
        int size = 1 << n;
        for(int i=0; i<size; i++)
        {
            ret.push_back((i >> 1) ^ i);
        }
        return ret;
    }
};