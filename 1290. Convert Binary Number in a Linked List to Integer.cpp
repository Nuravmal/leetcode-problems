1290. Convert Binary Number in a Linked List to Integer
Easy

389

35

Add to List

Share
Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.

Return the decimal value of the number in the linked list.



Example 1:


Input: head = [1,0,1]
Output: 5
Explanation: (101) in base 2 = (5) in base 10
Example 2:

Input: head = [0]
Output: 0
Example 3:

Input: head = [1]
Output: 1
Example 4:

Input: head = [1,0,0,1,0,0,1,1,1,0,0,0,0,0,0]
Output: 18880


class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int>dec;
        ListNode*temp=head;
        while(temp!=NULL)
        {
             dec.push_back(temp->val);
            temp=temp->next;
        }
        int sum=0;
        int index=0;
        for(int i=dec.size()-1;i>=0;i--)
        {int mul=pow(2,index++);
        sum+=dec[i]*mul;

        }
        return sum;
    }
};






m2
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int out=0;
        ListNode*temp=head;
        while(temp!=NULL)
        {
            out<<=1;
            out+=temp->val;
        temp=temp->next;
        }
        return out;
            }
};
