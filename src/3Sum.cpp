class Solution {
public:
    vector<vector<int> > threeSum(vector<int> &num) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        sort(num.begin(), num.end());
        vector<vector<int> > ret;
        vector<int> tmp;
        ret.clear();
        if(num.size()<3)
            return ret;
        int a, b, c;
        for(a=1; a<num.size()-1; a++)
        {
            
            b = 0;
            c = num.size()-1;
            while(b<a && a<c)
            {
                tmp.clear();
                if(num[b] + num[c] > -num[a])
                    c--;
                else if(num[b] + num[c] < -num[a])
                    b++;
                else
                {
                    tmp.push_back(num[b]);
                    tmp.push_back(num[a]);
                    tmp.push_back(num[c]);
                    if(find(ret.begin(), ret.end(), tmp) == ret.end())
                        ret.push_back(tmp);
                    c--;
                    b++;
                }
            }
        }
        return ret;
    }
};