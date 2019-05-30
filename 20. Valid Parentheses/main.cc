#include <iostream>

#include <utils.h>

#include "Solution.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string line;
    while (getline(cin, line)) {
        string s = stringToString(line);

        bool ret = Solution().isValid(s);

        string out = boolToString(ret);
        cout << out << endl;
    }

    return 0;
}
