# Max sum contiguous subarray

## Problem statement
You are given an array A of length N containing integers. Your task is to find out the largest contiguous sum subarray in the given array.

    Example:
    * A = [-2 1 -3 4 -2 3 1 -5 4]
    Ans = 6 : [4 -2 3 1]
    
## Solution
The trick to solving this problem is identifying the fact if a given subarray is the solution then no prefix of that array would have a negative sum. 

Let's assume 

$$
 [ A_i, .... , A_k ] 
$$

is the solution.

$$
 [ A_i, .... , A_k ] = [ A_i, ... , A_j ] + [ A_j, ..., A_k ]
$$

Let's assume that the prefix sum of

$$ 
A_i, ... , A_j
 $$

be negative, this implies that

$$
 [ A_i, .... , A_k ] - [ A_j, ... , A_k ] < 0
$$

Which in turn implies

$$
 [ A_i, .... , A_k ] < [ A_j, ... , A_k ]
$$

Which contradicts our original assumption.

Therefore no prefix sum of the answer will be negative. We can therefore keep a track of the running sum and can ignore the sum when it turns zero and start tracking again. Meanwhile we also keep a track of the max running sum encountered so far.

## Code

        public class Solution {
            public int maxSubArray(final List<Integer> A) {
                int maxEndingHere = A.get(0);
                int maxSoFar = A.get(0);
                for (int i = 1; i < A.size(); i++) {
                    maxEndingHere = Math.max(A.get(i), A.get(i) + maxEndingHere);
                    maxSoFar = Math.max(maxSoFar, maxEndingHere);
                }
                return maxSoFar;
            }
        }


