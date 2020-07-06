1019. Next Greater Node In Linked List
Medium

736

47

Add to List

Share
We are given a linked list with head as the first node.  Let's number the nodes in the list: node_1, node_2, node_3, ... etc.

Each node may have a next larger value: for node_i, next_larger(node_i) is the node_j.val such that j > i, node_j.val > node_i.val, and j is the smallest possible choice.  If such a j does not exist, the next larger value is 0.

Return an array of integers answer, where answer[i] = next_larger(node_{i+1}).



Example 1:

Input: [2,1,5]
Output: [5,5,0]
Example 2:

Input: [2,7,4,3,5]
Output: [7,0,5,5,0]
Example 3:

naive approach :TLE

class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {


        vector<int>input;
        vector<int>output;
        if(head==NULL)
            return output;
        if(head->next==NULL)
        {
            output.push_back(0);
        }

        while(head!=NULL)
        {
            input.push_back(head->val);
            head=head->next;
        }

        int n=input.size();
        int i=0;
        for(;i<n;i++)
        {
            for(int j=i+1;j<input.size();j++)
            {
                if(input[i]<input[j])
                {  output.push_back(input[j]);
                    break;}

                }
            if(output.size()==0)
                output.push_back(0);
            if(output.size()-1<i)
                output.push_back(0);

            }
       // output.push_back(0);

    return output;

    }
};


M2:
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
    vector<int> nextLargerNodes(ListNode* head) {
         stack<int> st;
        vector<int> vec;
        while(head!=NULL){
            vec.push_back(head->val);
            head=head->next;
        }

         vector<int> ans(vec.size(),0);
        for(int i=0;i<vec.size();i++)
        {
            if(st.empty())
                st.push(i);
            else
            {
                if(vec[st.top()]>=vec[i])
                    st.push(i);
                else
                {
                    while(st.size()&&vec[st.top()]<vec[i])
                    {ans[st.top()]=vec[i];
                    st.pop();
                }
                }
                st.push(i);
            }
        }
        return ans;

    }
};
