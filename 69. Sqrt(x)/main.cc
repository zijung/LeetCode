#include <iostream>
#include <string>

#include "../utils/utils.h"

#include "Solution.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::to_string;

int main() {
    string line;
    while (getline(cin, line)) {
        int x = stringToInteger(line);

        int ret = Solution().mySqrt(x);

        string out = to_string(ret);
        cout << out << endl;
    }

    return 0;
}
