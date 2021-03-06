//
//  BM28.cpp
//  NowCoder
//
//  Created by 邓亚洲 on 2022/5/2.
//
//BM28 二叉树的最大深度

#include <stdio.h>
//max 函数需要引入 <algorithm>
#include <algorithm>
//using namespace std; max 和 std::max 等价
using namespace std;

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x):val(x),left(NULL),right(NULL) {} //使用参数初始化列表来初始化字段
};

class Solution {
    
    
public:
    int maxDepth(TreeNode* root) {
        if (root == NULL) { return 0; }
        return max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
};
