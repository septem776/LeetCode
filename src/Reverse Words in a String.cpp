#include <string>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseWords(string &s) {
        istringstream iss(s);
        vector<string> v;
        while(iss >> s)
        {
            v.push_back(s);
        }
        ostringstream oss;
        for(int i=v.size()-1; i>=0; i--)
        {
            if(i != v.size()-1)
                oss << " ";
            oss << v[i];
        }
        s = oss.str();
    }
};

int main()
{
    Solution so;
    string s("test the word");
    so.reverseWords(s);
    cout<<s<<endl;
    return 0;
}