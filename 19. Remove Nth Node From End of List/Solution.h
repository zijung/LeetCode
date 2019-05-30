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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        ListNode *sentinel = new ListNode(0);
        sentinel->next = head;

        ListNode *i = sentinel, *j = sentinel;

        while (n != 0) {
            i = i->next;

            --n;
        }

        while (i->next != nullptr) {
            i = i->next;
            j = j->next;
        }

        j->next = j->next->next;

        head = sentinel->next;

        delete sentinel;

        return head;
    }
};
