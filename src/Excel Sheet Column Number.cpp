//
//  main.cpp
//  LeetCode
//
//  Created by Septem on 2/5/15.
//  Copyright (c) 2015 Septem. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

class Solution {
public:
    int titleToNumber(string s) {
        int ret = 0;
        int count = 0;
        for (int i=(int)s.size()-1; i>=0; i--) {
            ret += (s[i] - 'A' + 1) * (int)pow(26, count);
            count ++;
            
        }
        return ret;
    }
    
};

int main(int argc, const char * argv[]) {
    Solution so;
    cout << so.titleToNumber("AD") << endl;
    return 0;
}
