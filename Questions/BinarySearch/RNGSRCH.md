# Search for the range

## Question
Given a sorted array A of size N and a number B, find the starting and ending position of b in A in the format [leftindex, rightindex]. If B DNE in A, return [-1, -1]

## Solution
Whew, this took some time. So i'll cover some ground here before moving ahead. The solution is simple, do two binary search, one for the leftmost limit and another for the rightmost limit. How do we do that, let's see.

To figure out the left most index, we begin like this.

Take leftindex (li) to be 0 and rightindex (ri) to be length of array - 1

Case 1: Finding the leftmost index
- Step 1: Calculate the mid element (biased to the left due to rounding down)
- Step 2: If A[mid] == target ele (B) make ri = mid
- Step 3: If A[mid] < B, make li = mid + 1
- Step 4: If A[mid] > B, make ri = mid - 1 OR mid;
- So the final condition is, while (li < ri)
  - If A[mid] >= B, ri = mid
  - If A[mid] < B, li = mid + 1 (To prevent the condition where li and ri are adjacent and the target element is on ri)

Case 2: Finding the rightmost index
- Step 1: Calculate the mid element (mid = (li + ri + 1) / 2) [The avg is right biased to prevent getting stuck in situation where li and ri are adjacent and the target element lies on li]
- Step 2: If A[mid] == B, li = mid
- Step 3: If A[mid] < B, li = mid + 1
- Step 4: If A[mid] > B, ri = mid - 1 OR mid
- So the final condition is, while (li < ri)
  - If A[mid] <= B, li = mid
  - If A[mid] > B, ri = mid - 1 

Done! As simple as that!!!! Wohoo! Did it finally, really had to struggle through the activity to get this one checked out for the day!

## Code


        public class Solution {
            // DO NOT MODIFY THE LIST. IT IS READ ONLY
            public ArrayList<Integer> searchRange(final List<Integer> A, int B) {
                
                int leftmost = -1;
                int rightmost = -1;
                // finding leftmost element
                int l = 0;
                int r = A.size() - 1;
                int mid = (l + r)/2;;
                while (l < r) {
                    mid = (l + r)/2;
                    if(A.get(mid) < B) {
                        l = mid + 1;
                    }
                    else {
                        r = mid;
                    }
                }
                if(A.get(l) == B){
                    leftmost = l;
                }
                
                l = 0;
                r = A.size() - 1;
                
                while (l < r) {
                    mid = (int) Math.ceil((l + r)/2.0);
                    if(A.get(mid) <= B) {
                        l = mid;
                    }
                    else {
                        r = mid - 1;
                    }
                }
                if(A.get(r) == B){
                    rightmost = r;
                }
                
                ArrayList<Integer> ans = new ArrayList<>();
                ans.add(leftmost);
                ans.add(rightmost);
                return ans;
                
            }
        }

## Link
https://www.interviewbit.com/problems/search-for-a-range/