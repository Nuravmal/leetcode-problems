1464. Maximum Product of Two Elements in an Array
Easy

111

30

Add to List

Share
Given the array of integers nums, you will choose two different indices i and j of that array. Return the maximum value of (nums[i]-1)*(nums[j]-1).


Example 1:

Input: nums = [3,4,5,2]
Output: 12
Explanation: If you choose the indices i=1 and j=2 (indexed from 0), you will get the maximum value, that is, (nums[1]-1)*(nums[2]-1) = (4-1)*(5-1) = 3*4 = 12.
Example 2:

Input: nums = [1,5,4,5]
Output: 16
Explanation: Choosing the indices i=1 and j=3 (indexed from 0), you will get the maximum value of (5-1)*(5-1) = 16.

class Solution {
public:
    int maxProduct(vector<int>& nums) {

int max1=INT_MIN;
int max2=INT_MIN;

        for(int i=0;i<nums.size();i++)
        {
              if(max1<nums[i])
            {max2=max1;
               max1=nums[i];

            }

            else if(nums[i]<=max1 && max2<nums[i])
            {
                max2=nums[i];
            }

        }
        return (max1-1)*(max2-1);





    }
};



M2
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        return (nums[n]-1)*(nums[n-1]-1);


    }
};
