//912. Sort an Array
Given an array of integers nums, sort the array in ascending order.


//
// Example 1:
//
// Input: [5,2,3,1]
// Output: [1,2,3,5]
// Example 2:
//
// Input: [5,1,1,2,0,0]
// Output: [0,0,1,1,2,5]









class Solution {
public:

    void merge(vector<int>&nums,vector<int>&left,vector<int>&right){
        int i,j,k;
        i=0;j=0;k=0;
        while(i<left.size()&&j<right.size())
        {
            if(left[i]<=right[j]) nums[k++]=left[i++];
            else   nums[k++]=right[j++];

        }
        while(i<left.size())
            nums[k++]=left[i++];

        while(j<right.size())
            nums[k++]=right[j++];

    }

    vector<int> sortArray(vector<int>& nums) {
    int n=nums.size();
        if(n<2)
            return nums;
        int mid=n/2;
        vector<int>left;
        vector<int>right;

        for(int i=0;i<mid;i++)
            left.push_back(nums[i]);

        for(int i=mid;i<n;i++)
            right.push_back(nums[i]);
        sortArray(left);
        sortArray(right);
        merge(nums,left,right);


        return nums;



    }
};

//Runtime: 256 ms, faster than 5.21% of C++ online submissions for Sort an Array.
//Memory Usage: 114.4 MB, less than 5.08% of C++ online submissions for Sort an Array.
