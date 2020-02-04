# Find length of the last word of string

## Question
Given a string consisting only of lowercase and uppercase letters, and spaces ' ', determine the length of the last word. You should traverse the string only once. Use of library functions is not allowed.

## Solution
Very simple, iterate from the end of the string to help with the limit of single traversal, start counting the number of non space characters encountered and stop counting once you encounter a space or cover the string's length. Simple na?

NO!, You've committed the cardinal sin of not questioning your assumptions. The string might very well end with a space, and depending on the definition of a word, which a single space does not qualify for, our answer will be incorrect. See if the string ends, with a space, our algo will return length 0, which is incorrect.

So, instead we stop counting when we encounter space only if we have seen some non space characters before.

## Code

        public class Solution {
    
            public int lengthOfLastWord(final String A) {
                
                int sizeOfLastWord = 0;
                for (int index = A.length() - 1; index >= 0; index--) {
                    if(A.charAt(index) != ' ') {
                        sizeOfLastWord++;
                    }
                    else {
                        break;
                    }
                }
                return sizeOfLastWord;
            }
        }


### Link
https://www.interviewbit.com/problems/length-of-last-word/