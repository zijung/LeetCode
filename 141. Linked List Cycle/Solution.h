#include <unordered_set>

#include "ListNode.h"

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == nullptr || head->next == nullptr) {
            return false;
        }

        std::unordered_set<ListNode *> s;

        while (head != nullptr) {
            if (s.find(head) != s.end()) {
                return true;
            }

            s.insert(head);

            head = head->next;
        }

        return false;
    }
};
