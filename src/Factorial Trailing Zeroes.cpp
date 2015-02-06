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
    int trailingZeroes(int n) {
        int ret = 0;
        int x = 5;
        while (n >= x) {
            n /= x;
            ret += n;
        }
        return ret;
    }
};

int main(int argc, const char * argv[]) {
    Solution so;
    cout << so.trailingZeroes(25) << endl;
    return 0;
}
