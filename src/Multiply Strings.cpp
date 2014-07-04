class Solution {
public:
    string multiply(string num1, string num2) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(num1.size() == 0 || num2.size() == 0)
    		return 0;
		
		string ret(num1.size()+num2.size()+1, '0');
		reverse(num1.begin(), num1.end());
		reverse(num2.begin(), num2.end());
		for(int i=0; i<num1.size(); i++)
		{
			int carry = 0;
			int digit1 = num1[i] - '0';
			for(int j=0; j<num2.size(); j++)
			{
				int digit2 = num2[j] - '0';
				int exist = ret[i+j] - '0';
				int tmp = digit1*digit2;
				ret[i+j] = (tmp + exist + carry) % 10 + '0';
				carry = (tmp + exist + carry) / 10;
			}
			if(carry > 0)
			{
				ret[i+num2.size()] = carry + '0';
			}
		}
		reverse(ret.begin(), ret.end());
		int ind = 0;
		while(ind < ret.size() && ret[ind] == '0')
		{
			ind++;
		}
		if(ind == ret.size())
			return "0";
		return ret.substr(ind);
		
		
    }
};