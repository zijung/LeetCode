#ifndef LEETCODE_UTILS_LISTNODE_H
#define LEETCODE_UTILS_LISTNODE_H

#include <string>

struct ListNode {
    int val;
    ListNode *next;
    explicit ListNode(int x)
        : val(x)
        , next(nullptr) {}
};

ListNode *stringToListNode(const std::string &input);
std::string listNodeToString(const ListNode *node);

#endif // !LEETCODE_UTILS_LISTNODE_H
