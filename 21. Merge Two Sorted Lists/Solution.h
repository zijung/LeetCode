#include "../utils/ListNode.h"

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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        if (l1 == nullptr) {
            return l2;
        }

        if (l2 == nullptr) {
            return l1;
        }

        ListNode *head, *tmp;

        if (l1->val > l2->val) {
            tmp = l1;
            l1 = l2;
            l2 = tmp;
        }

        head = l1;

        while (true) {
            if (l1->next == nullptr) {
                l1->next = l2;
                break;
            }

            if (l1->next->val > l2->val) {
                tmp = l2;
                l2 = l2->next;

                tmp->next = l1->next;
                l1->next = tmp;

                if (l2 == nullptr) {
                    break;
                }

                continue;
            }

            l1 = l1->next;
        }

        return head;
    }
};
