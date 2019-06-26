//
// 88. Merge Sorted Array
//
// Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.
//
// Note:
//
// The number of elements initialized in nums1 and nums2 are m and n respectively.
// You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional elements from nums2.
// Example:
//
// Input:
// nums1 = [1,2,3,0,0,0], m = 3
// nums2 = [2,5,6],       n = 3
//
// Output: [1,2,2,3,5,6]







class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     int j=0;
      for(int i=nums1.size()-1;i>=0;i--)
      {
         if(!nums1[i] && j<n)
             nums1[i]=nums2[j++];}
    sort(nums1.begin(),nums1.end());
    }};




//
//     Details
// Runtime: 4 ms, faster than 93.28% of C++ online submissions for Merge Sorted Array.
// Memory Usage: 8.6 MB, less than 79.47% of C++ online submissions for Merge Sorted Arra
