#include <iostream>
#include <string>

#include "../utils/utils.h"

#include "Solution.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::to_string;
using std::vector;

int main() {
    string line;
    while (getline(cin, line)) {
        vector<int> nums = stringToIntegerVector(line);
        getline(cin, line);
        int target = stringToInteger(line);

        int ret = Solution().search(nums, target);

        string out = to_string(ret);
        cout << out << endl;
    }

    return 0;
}