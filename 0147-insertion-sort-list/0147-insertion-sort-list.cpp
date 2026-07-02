/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(next) {}
 * };
 */
class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode dummy(0);

        while (head) {
            ListNode* curr = head;
            head = head->next;

            // Find the insertion point
            ListNode* prev = &dummy;
            while (prev->next && prev->next->val < curr->val) {
                prev = prev->next;
            }

            // Insert curr
            curr->next = prev->next;
            prev->next = curr;
        }

        return dummy.next;
    }
};