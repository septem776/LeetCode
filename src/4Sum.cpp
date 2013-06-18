class Solution {
public:
    vector<vector<int> > fourSum(vector<int> &num, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<vector<int> > ret;
        vector<int> tmp;
        ret.clear();
        int len = num.size();
        if(len < 4)
            return ret;
        int a, b, c, d;
        sort(num.begin(), num.end());
        for(b=1; b<len-1; b++)
        {
            for(c=b+1; c<len-1; c++)
            {
                a = 0;
                d = len - 1;
                while(a<b && c<d)
                {
                    tmp.clear();
                    if(num[a] + num[b] + num[c] + num[d] < target)
                        a++;
                    else if(num[a] + num[b] + num[c] + num[d] > target)
                        d--;
                    else
                    {
                        tmp.push_back(num[a]);
                        tmp.push_back(num[b]);
                        tmp.push_back(num[c]);
                        tmp.push_back(num[d]);
                        if(find(ret.begin(), ret.end(), tmp) == ret.end())
                            ret.push_back(tmp);
                        a++;
                        d--;
                    }
                }
            }
        }
        return ret;
    }
};