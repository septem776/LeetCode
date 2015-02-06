//
//  main.cpp
//  LeetCode
//
//  Created by Septem on 2/5/15.
//  Copyright (c) 2015 Septem. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <string>
using namespace std;

class Solution {
public:
    string convertToTitle(int n) {
        string ret;
        while (n > 0) {
            ret.insert(ret.begin(), n%26 == 0 ? 'Z' : n%26 + 'A' - 1);
            if (n%26 == 0)
                n = n/26 - 1;
            else
                n /= 26;
        }
    
        return ret;
    }
};

int main(int argc, const char * argv[]) {
    Solution so;
    cout << so.convertToTitle(676) << endl;
    return 0;
}
