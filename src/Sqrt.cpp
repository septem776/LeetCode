class Solution {
public:
    int sqrt(int x) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(x==0)
            return 0;
        double eps = 0.000001;
        double val = x;
        double last;
        do 
        {
            last = val;
            val = (val + x/val)/2;
        } while(abs(val-last) > eps);
        return (int)val;
    }
};