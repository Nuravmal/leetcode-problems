// 1281. Subtract the Product and Sum of Digits of an Integer
//
// Example 1:
//
// Input: n = 234
// Output: 15
// Explanation:
// Product of digits = 2 * 3 * 4 = 24
// Sum of digits = 2 + 3 + 4 = 9
// Result = 24 - 9 = 15
// Example 2:
//
// Input: n = 4421
// Output: 21
// Explanation:
// Product of digits = 4 * 4 * 2 * 1 = 32
// Sum of digits = 4 + 4 + 2 + 1 = 11
// Result = 32 - 11 = 21
class Solution {
public:
    int subtractProductAndSum(int n) {
        int rem=0;
        int prod=1;
        int sum=0;
        while(n>0)
        {rem=n%10;
         sum+=rem;
         prod*=rem;
        n=n/10;
        }
        return prod-sum;
    }
};
