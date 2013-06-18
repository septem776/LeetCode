class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int carry = 0;
        int i = digits.size()-1;
        digits[i] = (digits[i] + 1) % 10;
        if(digits[i] == 0)
        {
            carry = 1;
            i--;
        }
        while(carry)
        {
            if(i == -1)
            {
                digits.insert(digits.begin(), 1);
                break;
            }
            digits[i]++;
            if(digits[i] == 10)
            {
                carry = 1;
                digits[i] = 0;
            }
            else
            {
                carry = 0;
            }
            i--;
        }
        return digits;
    }
};