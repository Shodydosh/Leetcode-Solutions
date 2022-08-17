//Explanation:
// The process:
// First we create variable named count which will count the number of palindromes there are. Then we iterate through s with and at each iteration, and then we create left and right pointer with a while loop to check whether or not the string is still a palindrome.

// How to check whether palindrome or not?:
// To count all odd length palindromes, at the start, the left pointer will be i and the right pointer will also be i. We will now work outwards. While l >= 0 and r < len(s) and s[r] == s[l], then we increase count by 1, decrease l by 1 and increase r by one. If the string is no longer a palindrome or s[r] != s[r], then we exit out of the while loop.

// To count all even length palindromes, at the start, the left pointer will be i and the right pointer will also be i + 1. We will now work outwards. While l >= 0 and r < len(s) and s[r] == s[l], then we increase count by 1, decrease l by 1 and increase r by one. If the string is no longer a palindrome or s[r] != s[r], then we exit out of the while loop.

// Finally...:
// Just return count.

class Solution {
public:
    int countSubstrings(string s) {
        int ans = 0;
        int right, left;
        
        // if the palindrome is odd
        for(int i=0; i<s.size(); i++){
            left = i; right = i;
            while(left >= 0 && right <= s.size()){
                if(s[left] == s[right]){
                    ans++;
                    left--; right++;
                } 
                else break;
            }
        }
        
        // if the palidrome is even 
        for(int i=0; i<s.size(); i++){
            left = i; right = i+1;
            while(left >= 0 && right <= s.size()){
                if(s[left] == s[right]){
                    ans++;
                    left--; right++;
                } 
                else break;
            }
        }
        
        return ans;
    }
};