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
        ListNode*fast=head;
        ListNode*slow=head;
        while(fast&&fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*curr=slow;
        ListNode*prev=NULL;
        ListNode*nextnode=NULL;
        while(curr!=NULL)
        {
            nextnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextnode;
        }
        ListNode *first=head;
        ListNode*second=prev;
        while(second!=NULL)
        {
            if(first->val!=second->val)
            return false;
            first=first->next;
            second=second->next;
        }
        return true;
    }
};