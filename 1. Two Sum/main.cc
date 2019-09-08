#include <iostream>
#include <string>
#include <vector>

#include "../utils/utils.h"

#include "Solution.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
    string line;
    while (getline(cin, line)) {
        vector<int> nums = stringToIntegerVector(line);
        getline(cin, line);
        int target = stringToInteger(line);

        vector<int> ret = Solution().twoSum(nums, target);

        string out = integerVectorToString(ret);
        cout << out << endl;
    }
    return 0;
}
