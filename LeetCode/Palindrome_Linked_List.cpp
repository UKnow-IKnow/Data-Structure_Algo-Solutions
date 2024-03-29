// LeetCode Q.234. Palindrome Linked List

//only logic part

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
    bool isPalindrome(ListNode* head) {
        string front = "";
        while(head){
            front += head->val;
            head = head->next;
        }
        string reverse_front = front;
        reverse(front.begin(), front.end());
        if(front == reverse_front)
            return true;
        return false;
    }
};