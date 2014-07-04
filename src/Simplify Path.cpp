class Solution {
public:
    string simplifyPath(string path) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        string ret = "";
        string tmp;
        vector<string> stack;
        for(int i=0; i<path.size(); )
        {
            while(i < path.size() && path[i] == '/')
                i++;
            if(i == path.size())
                break;
            int start = i;
            while(i < path.size() && path[i] != '/')
                i++;
            int end = i-1;
            tmp = path.substr(start, end-start+1);
            if(tmp == "..")
            {
                if(!stack.empty())
                    stack.pop_back();
            }
            else if(tmp != ".")
                stack.push_back(tmp);
        }
        if(stack.size() == 0)
            ret += "/";
        for(int i=0; i<stack.size(); i++)
        {
            ret += "/";
            ret += stack[i];
        }
        return ret;
    }
};