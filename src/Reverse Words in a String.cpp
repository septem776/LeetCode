#include <string>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <list>
using namespace std;

class Solution {
public:
    void reverseWords(string &s) {
        istringstream iss(s);
        list<string> l;
        copy(istream_iterator<string>(iss), istream_iterator<string>(), back_insert_iterator<list<string> >(l));
        l.reverse();
        copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    }
};

int main()
{
    Solution so;
    string s("test the word");
    so.reverseWords(s);
    return 0;
}