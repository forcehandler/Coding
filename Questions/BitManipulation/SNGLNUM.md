# Find single number
## Question
Given an array of integers, where every element appears twice except one, Find the single element.

E.g:  A = [1, 2, 2, 1, 3]
Ans = 3

## Solution

Use the XOR (Exclusive OR) operator to determine the single element. How?
So the XOR operator is a binary operator returns true if and only if only one of the two inputs is true, otherwise it returns false. This lends to a very pleasing property of XOR:
- a XOR 0 = a
- a XOR a = 0

Therefore, every two same elements will result in 0 and 0 XOR single element will result in the single element.

## Code

        public class Solution {
            public int singleNumber(final List<Integer> A) {
                int ans = 0;
                for(int a : A){
                    ans = ans ^ a;
                }
                return ans;
            }
        }


## Gotcha
This question seems to accept arrays with even number of elements as well. This goes against the problem statement which says all but one element appears twice in an array. For eg, if Arr = [1, 2], the output is 3 which is absurd.