#ifndef LEETCODE_UTILS_TREENODE_H
#define LEETCODE_UTILS_TREENODE_H

#include <string>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x)
        : val(x)
        , left(nullptr)
        , right(nullptr) {}
};

TreeNode *stringToTreeNode(std::string input);

#endif // !LEETCODE_UTILS_TREENODE_H
