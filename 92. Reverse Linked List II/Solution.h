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
    // 4ms 99.36%
    ListNode *reverseBetween(ListNode *head, int m, int n) {
        int index = 0;
        ListNode *sentinel = new ListNode(0);
        sentinel->next = head;

        ListNode *reverseStart = sentinel, *i = sentinel;
        ListNode *tmp;

        while (i) {
            if (index + 1 == m) {
                reverseStart = i;
            } else if (index >= m && index < n) {
                tmp = i->next;
                i->next = tmp->next;

                tmp->next = reverseStart->next;
                reverseStart->next = tmp;

                ++index;

                continue;
            }

            i = i->next;
            ++index;
        }

        head = sentinel->next;

        delete sentinel;

        return head;
    }
};
