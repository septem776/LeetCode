class Solution {
public:
    double pow(double x, int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        double ret = 1.0;
        if(n == 0)
            return 1;
        if(x == 0)
            return 0;
        
        bool flag = false;
        if(n < 0)
        {
            flag = true;
            n = -n;
        }
        while(n>0)
        {
            if(n & 1 == 1)
            {
                ret *= x;
            }
            x *= x;
            n>>=1;
        }
        if(flag)
            return 1.0 / ret;
        return ret;
    }
};