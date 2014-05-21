#include <vector>
#include <iostream>
#include <stack>
#include <string>
#include <sstream>
using namespace std;

class Solution {
public:
	int evalRPN(vector<string> &tokens) {
		stack<string> st;
		for(int i=0; i<tokens.size(); i++)
		{
			if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
			{
				int a = atoi(st.top().c_str());
				st.pop();
				int b = atoi(st.top().c_str());
				st.pop();
				int num = 0;
				if(tokens[i] == "+")
					num = a + b;
				else if(tokens[i] == "-")
					num = b - a;
				else if(tokens[i] == "*")
					num = b * a;
				else if(tokens[i] == "/")
					num = b / a;
				ostringstream oss;
				oss << num;
				st.push(oss.str());
			}
			else
			{
				st.push(tokens[i]);	
			}			
		}
		return atoi(st.top().c_str());
	}
};

int main()
{

	return 0;
}