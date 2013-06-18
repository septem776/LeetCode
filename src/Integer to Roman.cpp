class Solution {
public:
    string intToRoman(int num) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function    
        string result;
        map<int, string> m1;
        m1.insert(make_pair(1, "I"));
        m1.insert(make_pair(4, "IV"));
        m1.insert(make_pair(5, "V"));
        m1.insert(make_pair(9, "IX"));
        map<int, string> m2;
        m2.insert(make_pair(1, "X"));
        m2.insert(make_pair(4, "XL"));
        m2.insert(make_pair(5, "L"));
        m2.insert(make_pair(9, "XC"));
        map<int, string> m3;
        m3.insert(make_pair(1, "C"));
        m3.insert(make_pair(4, "CD"));
        m3.insert(make_pair(5, "D"));
        m3.insert(make_pair(9, "CM"));
        map<int, string> m4;
        m4.insert(make_pair(1, "M"));
        int n = 0;
        if(num >= 1000)
        {
            n = num / 1000;
            while(n>0)
            {
                result += m4[1];
                n--;
            }
            num = num%1000;
        }
        if(num >= 100)
        {
            n = num / 100;
            switch(n)
            {
            case 1:
            case 2:
            case 3:
                while(n>0)
                {
                    result += m3[1];
                    n--;
                }
                break;
            case 4:
            case 5:
            case 9:
                result += m3[n];
                break;
            case 6:
            case 7:
            case 8:
                result += m3[5];
                while(n>5)
                {
                    result += m3[1];
                    n--;
                }
                break;
            }
            num = num % 100;
        }
        if(num >= 10)
        {
            n = num / 10;
            switch(n)
            {
            case 1:
            case 2:
            case 3:
                while(n>0)
                {
                    result += m2[1];
                    n--;
                }
                break;
            case 4:
            case 5:
            case 9:
                result += m2[n];
                break;
            case 6:
            case 7:
            case 8:
                result += m2[5];
                while(n>5)
                {
                    result += m2[1];
                    n--;
                }
                break;
            }
            num = num % 10;
        }
        if(num > 0)
        {
            n = num;
            switch(n)
            {
            case 1:
            case 2:
            case 3:
                while(n>0)
                {
                    result += m1[1];
                    n--;
                }
                break;
            case 4:
            case 5:
            case 9:
                result += m1[n];
                break;
            case 6:
            case 7:
            case 8:
                result += m1[5];
                while(n>5)
                {
                    result += m1[1];
                    n--;
                }
                break;
            }
        }
        return result;
    }
};