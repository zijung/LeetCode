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

        ListNode *ret = Solution().reverseList(head);

        string out = listNodeToString(ret);
        cout << out << endl;
    }

    return 0;
}
