class Solution {
public:
    int reverse(int x) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int digit = 0;
        int y = abs(x);
        if(y<10)
            return x;
        int val = 0;
        int num[100];
        memset(num, 0, sizeof(num));
        for(int i=0; y>0 ; i++)
        {
            num[i] = y % 10;
            y /= 10;
            digit++;
        }
        int base = 1;
        for(int i=digit-1; i>=0; i--)
        {
            val += num[i] * base;
            base *= 10;
        }
        if(x<0)
            val = -val;
        return val;
    }
};