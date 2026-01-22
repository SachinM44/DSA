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
    int pairSum(ListNode* head) {
        /// lets solve it by using both fast and slow pointer and the two pointer approch ; 
        //1th find the middle 

       ListNode* fast=head;
       ListNode* slow=head;
       while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
       }
       ////now we got the middle of the link list , out slow pointer pointing out to the middle of the ll, reverse the 2nd half(right ride) of ll using the slow as the stating node;
       ListNode* curr=slow;
       ListNode* next=NULL;
       ListNode* prev=NULL;
       while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
       }
       ////now we reversed the second half of the linkedin list , and now its time to use 2 ponmter approch , out first pointer will point to head node of first half of LL , and the second hald will point out to 2nd pointer and starting point will be the prev 
       ListNode* first=head;
       ListNode* second=prev;
       int maxSum=0;
       while(second!=NULL){
          maxSum=max(maxSum, first->val+second->val);
          first=first->next;
          second=second->next;
       }
     return maxSum;   
    }
};