#include <vector>

#include "../utils/TreeNode.h"

using std::vector;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void go(vector<vector<int>> &v, int deep, TreeNode *node) {
        if (deep >= v.size()) {
            v.resize(deep + 1);
        }

        v[deep].emplace_back(node->val);

        if (node->left) {
            go(v, deep + 1, node->left);
        }

        if (node->right) {
            go(v, deep + 1, node->right);
        }
    }

    vector<vector<int>> levelOrder(TreeNode *root) {
        vector<vector<int>> res;

        if (root == nullptr) {
            return res;
        }

        go(res, 0, root);

        return res;
    }
};
