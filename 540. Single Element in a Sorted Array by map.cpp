// 540. Single Element in a Sorted Array
// Medium
//
// 753
//
// 60
//
// Favorite
//
// Share
// Given a sorted array consisting of only integers where every element appears exactly twice except for one element which appears exactly once. Find this single element that appears only once.
//
//
//
// Example 1:
//
// Input: [1,1,2,3,3,4,4,8,8]
// Output: 2
// Example 2:
//
// Input: [3,3,7,7,10,11,11]
// Output: 10
//


class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        map<int,int>m1;
        for(auto i:nums)
            m1[i]++;
        int temp=0;
        for(auto it=m1.begin();it!=m1.end();it++)
        {
            if(it->second==1)
                temp=it->first;
        }
        return temp;
    }
  };
// };
// Runtime: 20 ms, faster than 8.08% of C++ online submissions for Single Element in a Sorted Array.
// Memory Usage: 11.3 MB, less than 5.11% of C++ online submissions for Single Element in a Sorted Array.
