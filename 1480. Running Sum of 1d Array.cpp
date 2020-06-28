1480. Running Sum of 1d Array
Easy

124

21

Add to List

Share
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.



Example 1:

Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
Example 2:

Input: nums = [1,1,1,1,1]
Output: [1,2,3,4,5]
Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].



















class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>result;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {sum+=nums[i];
         result.push_back(sum);
        }
        return result;
    }
};
