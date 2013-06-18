class Solution {
public:
    bool isValid(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        char stack[1000];
        int top = -1;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                stack[++top] = s[i];
            }
            else
            {
                switch(s[i])
                {
                case ')':
                    if(top > -1 && stack[top] == '(')
                        top--;
                    else
                        return false;
                    break;
                case ']':
                    if(top > -1 && stack[top] == '[')
                        top--;
                    else
                        return false;
                    break;
                case '}':
                    if(top > -1 && stack[top] == '{')
                        top--;
                    else
                        return false;
                    break;
                }
            }
        }
        if(top == -1)
            return true;
        return false;
    }
};