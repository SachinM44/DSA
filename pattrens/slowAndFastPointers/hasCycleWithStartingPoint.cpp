/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {
        /// here is same has the prev , but retrun the curr node where that points meets
        ListNode *slow = head;
        ListNode *fast = head;
        bool cycle = false;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                cycle = true;
                break;
            }
        }

        if (!cycle)
        {
            return NULL;
        }

        /// now the catch is lets start those pointer in the same loop with same postion , and when they meet that point will be the loop starting point

        slow = head;
        while (slow != fast)
        {
            slow = slow->next;
            fast = fast->next;
        }

        return slow;
    }
};