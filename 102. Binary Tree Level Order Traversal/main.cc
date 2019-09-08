#include <iostream>
#include <string>

#include "../utils/utils.h"
#include "../utils/TreeNode.h"

#include "Solution.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string line;
    while (getline(cin, line)) {
        TreeNode *root = stringToTreeNode(line);

        vector<vector<int>> ret = Solution().levelOrder(root);

        string out = twoDimensionalIntegerVectorToString(ret);
        cout << out << endl;
    }

    return 0;
}
