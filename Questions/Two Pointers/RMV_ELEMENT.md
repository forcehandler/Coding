# Remove an element from array

## Question

Given an element and a array, remove all instances of the element and return the array and its length. [Actually simply move all desired elements to the left and return the last desired index + 1]

Space complexity should be less than linear.

eg

        If array A is [4, 1, 1, 2, 1, 3]
        and value elem is 1,
        then new length is 3, and A is now [4, 2, 3]

## Solution
Take two pointers p1 and p2. Keeping p1 fixed, loop p2 through the array and copy the value of array at p2 when the value of array is the desired value.

## Code



        public class Solution
        {
            public int removeElement(ArrayList<Integer> a, int b)
            {
                int n = a.size();
                int i, j;
                
                for (i=0, j=0; j<n; j++)
                {
                    if (a.get(j) != b)
                    {
                        a.set(i, a.get(j));
                        i++;
                    }
                }
                
                return i;
            }
        }

## My code:

        public class Solution {
            public int removeElement(ArrayList<Integer> a, int b) {
                
                int p1, p2 = 0; 
                int s = a.size();
                p1 = -1;
                p2 = 0;
                for( p2 = 0; p2 < s; p2++){
                    if(a.get(p2) != b){
                        p1++;
                        int temp = a.get(p1);
                        a.set(p1, a.get(p2));
                        a.set(p2, temp);
                    }
                }
                return p1+1;
                
            }
        }

## Learning: 
- Keep Calm
- Chill
- And no need to swap the values baba.