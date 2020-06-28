83. Remove Duplicates from Sorted List
Easy

1467

108

Add to List

Share
Given a sorted linked list, delete all duplicates such that each element appear only once.

Example 1:

Input: 1->1->2
Output: 1->2
Example 2:

Input: 1->1->2->3->3
Output: 1->2->3
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL||head->next==NULL)
            return head;
        ListNode*curr=head;
        ListNode*q=curr->next;
        while(curr->next!=NULL)
        {
            if(curr->val==q->val)
            {
                curr->next=q->next;

            }
            else
                curr=q;
               q=q->next;
           }
    return head;
}
    };


    M2
    class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {


 	ListNode* cur = head;
	while (cur && cur->next) {
		if (cur->val == cur->next->val) {
			ListNode* pDuplicate = cur->next;
			cur->next = cur->next->next;
			delete pDuplicate;
		}
		else
			cur = cur->next;
	}
	return head;
    }
};
