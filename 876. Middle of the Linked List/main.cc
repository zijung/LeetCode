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

        ListNode *ret = Solution().middleNode(head);

        string out = listNodeToString(ret);
        cout << out << endl;
    }
    return 0;
}