/*Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
*/
class Solution {
public:
    bool isPalindrome(int x) {
        int n=x;
        int rem, rev=0;
        while(n!=0){
            rem=n%10;
            rev=(rev*10)+rem;
            n=n/10;
        }
if(x<0){
            return false;
        }
        if(x==rev){
            return true;
        }
        else{
            return false;
        }
    }
};