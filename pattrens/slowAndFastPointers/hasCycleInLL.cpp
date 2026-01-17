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
    bool hasCycle(ListNode *head) {
        bool cycle=false;
        //// will use the fast and slow pointer approch only 
        ///when they are running one point they will definalty meet each other , slow and fast are on the same node , if that is true -> return true : else retrun false
        ListNode *slow=head;
        ListNode *fast=head;
      while(fast!=NULL && fast->next!=NULL){

           slow=slow->next;
           fast=fast->next->next;
           if(slow==fast){
           return cycle=true;
            break;
           }
      }

      return cycle;
    }
};