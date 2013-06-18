class Solution {
public:
    int threeSumClosest(vector<int> &num, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int len = num.size();
        sort(num.begin(), num.end());
        int ret;
        int closest = 65536;
        int a, b, c;
        for(b=1; b<len-1; b++)
        {
            a = 0;
            c = len-1;
            while(a<b && b<c)
            {
                int tmp = num[a] + num[b] + num[c];
                int diff = abs(tmp - target);
                if(diff == 0)
                {
                    return tmp;
                }
                if(diff < closest)
                {
                    closest = diff;
                    ret = tmp;
                }
                if(tmp < target)
                    a++;
                else if(tmp > target)
                    c--;
            }
        }
        return ret;
    }
};