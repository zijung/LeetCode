#include <iostream>
#include <string>

#include "../utils/utils.h"
#include "../utils/ListNode.h"

#include "Solution.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string line;
    while (getline(cin, line)) {
        ListNode *head = stringToListNode(line);
        getline(cin, line);
        int pos = stringToInteger(line);

        bool ret = Solution().hasCycle(head);

        string out = boolToString(ret);
        cout << out << endl;
    }

    return 0;
}
