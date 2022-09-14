//LeetCode Q.92. Reverse Linked List II

// Only logic part

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode *dummy = new ListNode(0), *prev = dummy, *curr;
        dummy -> next = head;
        for (int i = 0; i < m - 1; i++) {
             prev = prev-> next;
        }
        curr = prev -> next;
        for (int i = 0; i < n - m; i++) {
            ListNode *forw = curr->next; 
                curr->next = forw->next;
                forw->next = prev->next;
                prev->next = forw;
        }
        return dummy -> next;
    }
};