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



//Definition for binary tree
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<int> inorderTraversal(TreeNode *root) {
        ans.clear();
        doTraversal(root);
        return ans;
    }
    
    void doTraversal(TreeNode *node) {
        if (!node) {
            return;
        }
        doTraversal(node->left);
        ans.push_back(node->val);
        doTraversal(node->right);
    }
private:
    vector<int> ans;
};

int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

