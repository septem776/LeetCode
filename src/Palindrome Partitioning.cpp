class Solution {
public:
	vector<vector<string> > ret;
    vector<vector<string>> partition(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
		vector<string> tmp;
		ret.clear();
        generate(s, 0, tmp);
		return ret;
    }
	
	void generate(string s, int start, vector<string> &tmp)
	{
		if(start == s.size())
		{
			ret.push_back(tmp);
			return;
		}
		
		for(int i=start; i<s.size(); i++)
		{
			if(isPalindrome(s, start, i))
			{
				tmp.push_back(s.substr(start, i-start+1));
				generate(s, i+1, tmp);
				tmp.pop_back();
			}
		}
		
	}
	
	bool isPalindrome(string s, int start, int end)
	{
		string ss = s.substr(start, end-start+1);
		string rs(ss.rbegin(), ss.rend());
		return ss == rs;
	}
};