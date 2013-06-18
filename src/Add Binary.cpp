class Solution {
public:
    string addBinary(string a, string b) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        char x[1000];
        char y[1000];
        char sum[1000];
        string ret;
        for(int i=0; i<1000; i++)
        {
            x[i] = '0';
            y[i] = '0';
            sum[i] = '0';
        }
        int len = max(a.size(), b.size());
        int carry = 0;
        for(int i=0; i<a.size(); i++)
            x[i] = a[a.size()-i-1];
        for(int i=0; i<b.size(); i++)
            y[i] = b[b.size()-i-1];
        for(int i=0; i<len; i++)
        {
            sum[i] = (x[i] - '0' + y[i] - '0' + carry) % 2 + '0';
            carry = (x[i] - '0' + y[i] - '0' + carry) / 2;
        }
        if(carry)
            sum[len++] = '1';
        for(int i=0; i<len; i++)
            ret += sum[len-i-1];
        return ret;
    }
};