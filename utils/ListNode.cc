#include "ListNode.h"

#include <vector>
#include <string>

#include "utils.h"

using std::vector;
using std::string;
using std::to_string;

ListNode *stringToListNode(const std::string &input) {
    // Generate list from the input
    vector<int> list = stringToIntegerVector(input);

    // Now convert that list into linked list
    ListNode *dummyRoot = new ListNode(0);
    ListNode *ptr = dummyRoot;
    for (int item : list) {
        ptr->next = new ListNode(item);
        ptr = ptr->next;
    }
    ptr = dummyRoot->next;
    delete dummyRoot;
    return ptr;
}

std::string listNodeToString(const ListNode *node) {
    if (node == nullptr) {
        return "[]";
    }

    string result;
    while (node) {
        result += to_string(node->val) + ", ";
        node = node->next;
    }

    return "[" + result.substr(0, result.length() - 2) + "]";
}
