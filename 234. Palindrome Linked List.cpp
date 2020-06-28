234. Palindrome Linked List
Easy

3029

348

Add to List

Share
Given a singly linked list, determine if it is a palindrome.

Example 1:

Input: 1->2
Output: false
Example 2:

Input: 1->2->2->1
Output: true
Follow up:
Could you do it in O(n) time and O(1) space?







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

    vector<int>pal;
        while(head!=NULL)
        {
            pal.push_back(head->val);
            head=head->next;

        }
        int j=pal.size()-1;
        for(int i=0;i<pal.size()/2;i++)
        {
            if(pal[i]!=pal[j])
            return false;
            j--;
        }
        return true;

        }

};


M2
