160. Intersection of Two Linked Lists
Easy

3480

403

Add to List

Share
Write a program to find the node at which the intersection of two singly linked lists begins.

For example, the following two linked lists:


begin to intersect at node c1.



Example 1:


Input: intersectVal = 8, listA = [4,1,8,4,5], listB = [5,0,1,8,4,5], skipA = 2, skipB = 3
Output: Reference of the node with value = 8
Input Explanation: The intersected node's value is 8 (note that this must not be 0 if the two lists intersect). From the head of A, it reads as [4,1,8,4,5]. From the head of B, it reads as [5,0,1,8,4,5]. There are 2 nodes before the intersected node in A; There are 3 nodes before the intersected node in B.


Example 2:


Input: intersectVal = 2, listA = [0,9,1,2,4], listB = [3,2,4], skipA = 3, skipB = 1
Output: Reference of the node with value = 2
Input Explanation: The intersected node's value is 2 (note that this must not be 0 if the two lists intersect). From the head of A, it reads as [0,9,1,2,4]. From the head of B, it reads as [3,2,4]. There are 3 nodes before the intersected node in A; There are 1 node before the intersected node in B.


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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode*,int>m1;
        while(headA!=NULL)
        {
            m1[headA]++;
            headA=headA->next;
        }

        while(headB!=NULL)
        {
            if(m1.find(headB)!=m1.end())
                return headB;
            headB=headB->next;
        }
        return NULL;
    }
};



M2

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int m=0;int n=0;
        ListNode*A=headA;
        ListNode*B=headB;
        while(A)
        {
            A=A->next;
            m++;
        }
        while(B)
        {
            B=B->next;
            n++;
        }

        A=headA;B=headB;
        int diff=abs(m-n);
        if(n>m)
        {
            swap(A,B);
        }
        while(diff)
        {
            A=A->next;
            diff--;
        }

        while(A!=NULL&&B!=NULL)
        {
            if(A==B)
                return A;
            A=A->next;
            B=B->next;
        }
        return NULL;

    }
};

M3
