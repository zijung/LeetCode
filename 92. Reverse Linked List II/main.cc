#include <iostream>
#include <string>

#include <ListNode.h>
#include <utils.h>

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
        int m = stringToInteger(line);
        getline(cin, line);
        int n = stringToInteger(line);

        ListNode *ret = Solution().reverseBetween(head, m, n);

        string out = listNodeToString(ret);
        cout << out << endl;
    }

    return 0;
}
