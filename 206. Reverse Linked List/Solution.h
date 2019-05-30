#include <ListNode.h>

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
    ListNode *reverseList(ListNode *head) {
        if (head == nullptr) {
            return nullptr;
        }

        ListNode *i = head;
        ListNode *tmp;

        while (i->next) {
            tmp = i->next;
            i->next = tmp->next;
            tmp->next = head;
            head = tmp;
        }

        return head;
    }
};
