# Find square root of an integer

## Question
Given an integer A, compute the square root of A. If A is not a perfect square return

$$
floor(sqrt(A))
$$

You are not allowed to use the library square root function.

## Solution

Consider the function 

$$
f(x) = 0;  if x^2 <= A, else , 1
$$

Since f(x) is monotonic function, our search space would look like as follows:  [1,1,1, ... ,0,0,0]. The problem would then be to identify the last 1 in this sequence.

Notes: 
- We loop till left < right
- If mid evaluates to zero, make right = mid - 1, since we do not need zero in search space
- If mid evaluates to one,  we make left = right + 1, since otherwise in case of left and right differing by one, the mid will always evaluate to left and since we need to find the right-most 1, we need to advance.
- The loop will exit once left == right or right < left. 
- The value of right will be the answer

Learnings:
- In order to safely average two values within the same data type, use the following formula
$$
avg(a,b) = sum(a/2, b/2) + sum(a\mod2, b \mod 2)/2
$$

        int a = INT_MAX
        int b = 3
        int c = (a/2.0 + b/2.0) + (a%2 + b%2)/2.0

- Also the operation occurs within the data limits of the operands and not in the data type of the LHS. eg:

        int a = INT_MAX
        int b = 2
        long c = a * b //Wrong answer, since multiplication results in overflow for integer;
        c = (long) a  * b //Correct

- Use division instead of multiplication to prevent overflow while testing conditions, eg:

        if (A < mid * mid)  // Can result in overflow

        if (A/mid < mid)   //Better


## Code

        public class Solution {
            public int sqrt(int A) {
                // System.out.println(2147483647 * 2147483647);
                // return 1;
                int low = 0;
                int high = A;
                int mid = 0;
                while (low < high) {
                    mid = (int) Math.ceil((low/2.0) + (high/2.0) + (low%2 + high%2)/2.0);
                    long ans = (mid * (long)mid);
                    if (ans == A){
                        return mid;
                    }
                    else if (ans > A) {
                        high = mid - 1;
                    }
                    else {
                        low = mid;
                    }
                }
                return high;
            }
        }
