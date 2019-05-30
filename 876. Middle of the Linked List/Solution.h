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
    ListNode *middleNode(ListNode *head) {
        // 空鏈表或者只有一個節點，直接反回 true
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode *slow = head, *fast = head;

        while (true) {
            if (fast->next == nullptr) {
                break;
            }

            fast = fast->next;

            slow = slow->next;

            if (fast->next == nullptr) {
                break;
            }

            fast = fast->next;
        }

        return slow;
    }
};