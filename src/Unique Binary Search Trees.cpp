//
//  main.cpp
//  test
//
//  Created by Septem on 3/29/14.
//  Copyright (c) 2014 Septem. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;



class Solution {
public:
    int numTrees(int n) {
        vector<int> ret(n+1, 0);
        ret[0] = 1;
        ret[1] = 1;
        for (int i=2; i<=n; i++) {
            for (int j=0; j<i; j++) {
                ret[i] += ret[j] * ret[i-j-1];
            }
        }
        return ret[n];
    }
};

int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

