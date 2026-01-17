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
    ListNode* middleNode(ListNode* head) {
       //// for thsi we will use fast and slow pointer approch;
       ///first define the pointer which slow move by 1, and the fast is move by 2 
       ListNode* slow=head;
       ListNode* fast=head;
       //fast!=NULL this conditon is for even sized LL
       // fast->next !=NULL is for of even // means in even we get 2 number and in that we get right most one number 
       while(fast!=NULL && fast->next !=NULL){
        slow=slow->next;//move by one 
        fast=fast->next->next; ///move by 2
       } 
       return slow;
    }
};