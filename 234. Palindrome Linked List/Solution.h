#include <iostream>

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
    // 不還原，24ms 97.67%
    bool isPalindrome(ListNode *head) {
        // 空鏈表或者只有一個節點，直接反回 true
        if (head == nullptr || head->next == nullptr) {
            return true;
        }

        ListNode *slow = head, *fast = head;

        ListNode *tmp;

        // 鏈表長度是否奇數
        bool oddCount = true;

        while (fast->next != nullptr) {
            fast = fast->next;

            if (fast->next == nullptr) {
                // 最後一次只能移動一次，說明鏈表長度是奇數
                oddCount = false;
                break;
            }

            fast = fast->next;

            // 將慢指針的下一個直接移動到頭部，慢指針指向不變（翻轉前半部分）
            tmp = slow->next;
            slow->next = slow->next->next;
            tmp->next = head;
            head = tmp;
        }

        fast = slow->next;

        slow = head;
        if (oddCount) {
            // 若鏈表長度爲奇數，則跳過翻轉後的第一條（原鏈表的中間）
            slow = head->next;
        }

        while (fast != nullptr) {
            if (slow->val != fast->val) {
                return false;
            }

            slow = slow->next;
            fast = fast->next;
        }

        return true;
    }

    // 還原，32ms 94.09%
    // bool isPalindrome(ListNode* head) {
    //     // 空鏈表或者只有一個節點，直接反回 true
    //     if (head == nullptr || head->next == nullptr) {
    //         return true;
    //     }

    //     ListNode *slow = head,
    //              *fast = head;

    //     ListNode *tmp;

    //     // 鏈表長度是否奇數
    //     bool oddCount = true;

    //     while (fast->next ！= nullptr) {
    //         fast = fast->next;

    //         if (fast->next == nullptr) {
    //             // 最後一次只能移動一次，說明鏈表長度是奇數
    //             oddCount = false;
    //             break;
    //         }

    //         fast = fast->next;

    //         // 將慢指針的下一個直接移動到頭部，慢指針指向不變（翻轉前半部分）
    //         tmp = slow->next;
    //         slow->next = slow->next->next;
    //         tmp->next = head;
    //         head = tmp;
    //     }

    //     fast = slow->next;

    //     slow = head;
    //     if (oddCount) {
    //         // 若鏈表長度爲奇數，則跳過翻轉後的第一條（原鏈表的中間）
    //         slow = head->next;
    //     }

    //     bool result = true;

    //     // 此時的 tmp 是原來鏈表的中點或前部分的最後一個
    //     tmp = head;

    //     while (fast != nullptr) {
    //         if (slow->val != fast->val) {
    //             result = false;
    //         }

    //         if (slow == head) {
    //             slow = slow->next;
    //         } else {
    //             // 若不是第一條，將當前節點移動到最前面
    //             tmp->next = slow->next;
    //             slow->next = head;
    //             head = slow;
    //             slow = tmp->next;
    //         }

    //         fast = fast->next;
    //     }

    //     return result;
    // }
};
