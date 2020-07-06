You have a total of n coins that you want to form in a staircase shape, where every k-th row must have exactly k coins.

Given n, find the total number of full staircase rows that can be formed.

n is a non-negative integer and fits within the range of a 32-bit signed integer.

Example 1:

n = 5

The coins can form the following rows:
¤
¤ ¤
¤ ¤

Because the 3rd row is incomplete, we return 2.
Example 2:

n = 8

The coins can form the following rows:
¤
¤ ¤
¤ ¤ ¤
¤ ¤

Because the 4th row is incomplete, we return 3.


class Solution {
public:
    int arrangeCoins(int n) {


        if(n<=0)
            return n;

        if(n==1)
            return 1;

        int count=0;
        while(n>=0)
        {count++;
            n=n-count;


        }
        return count-1;
    }
};

M2

If we look deeper into the formula of the problem, we could actually solve it with the help of mathematics, without using any iteration.

As a reminder, the constraint of the problem can be expressed as follows:

k(k + 1) < 2N

((K+1/2)^2)-(1/4))<N;



class Solution {
public:
    int arrangeCoins(int n) {
  return (int)(sqrt(2 * (long)n + 0.25) - 0.5);
    }
};


M3:
binary search
Approach 1: Binary Search
This question is easy in a sense that one could run an exhaustive iteration to obtain the result.
 That could work, except that it would run out of time when the input becomes too large. So let us
 take a step back to look at the problem, before rushing to the implementation.

Assume that the answer is kk, i.e. we've managed to complete kk rows of coins.
 These completed rows contain in total 1 + 2 + ... + k = {k (k + 1)/2}

We could now reformulate the problem as follows:

Find the maximum k such that {k (k + 1)/2}< N


The problem seems to be one of those search problems.
 And instead of naive iteration, one could resort to another more efficient algorithm called binary search,
 as we can find in another similar problem called search insert position.


 class Solution {
  public int arrangeCoins(int n) {
    long left = 0, right = n;
    long k, curr;
    while (left <= right) {
      k = left + (right - left) / 2;
      curr = k * (k + 1) / 2;

      if (curr == n) return (int)k;

      if (n < curr) {
        right = k - 1;
      } else {
        left = k + 1;
      }
    }
    return (int)right;
  }
}
