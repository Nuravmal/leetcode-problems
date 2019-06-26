// Write a function that reverses a string. The input string is given as an array of characters char[].
//
// Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
//
// You may assume all the characters consist of printable ascii characters.
//
//
//
// Example 1:
//
// Input: ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]
// Example 2:
//
// Input: ["H","a","n","n","a","h"]
// Output: ["h","a","n","n","a","H"]




class Solution {
public:
    void reverseString(vector<char>& s) {

        int l=0;
        int r=s.size()-1;
        char temp;
        while(l<r)
        {
            temp=s[r];
            s[r--]=s[l];
            s[l++]=temp;
        }

    }
};
// Runtime: 48 ms, faster than 85.77% of C++ online submissions for Reverse String.
// Memory Usage: 15.2 MB, less than 56.47% of C++ online submissions for Reverse String.
