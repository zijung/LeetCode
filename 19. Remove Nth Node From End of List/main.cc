#include <iostream>

#include <ListNode.h>
#include <utils.h>

#include "Solution.h"

using std::cin;
using std::cout;
using std::endl;

int main() {
    string line;
    while (getline(cin, line)) {
        ListNode *head = stringToListNode(line);
        getline(cin, line);
        int n = stringToInteger(line);

        ListNode *ret = Solution().removeNthFromEnd(head, n);

        string out = listNodeToString(ret);
        cout << out << endl;
    }

    return 0;
}
