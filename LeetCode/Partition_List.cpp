//LeetCode Q.86. Partition List

//Only logic part

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
    ListNode* partition(ListNode* head, int x) {
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* ptr1 = dummy;
        
        while(ptr1 != NULL && ptr1->next != NULL && ptr1->next->val < x){
            ptr1 = ptr1->next;
        }
        
        ListNode* ptr2 = ptr1->next;
        while(ptr2 != NULL && ptr2->next != NULL){
            if(ptr2->next->val < x){
                ListNode* temp1 = ptr1->next;
                ListNode* temp2 = ptr2->next;
                ptr2->next = temp2->next;
                ptr1->next = temp2;
                temp2->next = temp1;
                ptr1 = ptr1->next;
            }
            else{
               ptr2 = ptr2->next;  
            } 
        }
        return dummy->next;
    }
};