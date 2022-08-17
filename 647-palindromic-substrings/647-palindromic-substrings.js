/**
 * @param {string} s
 * @return {number}
 */
var countSubstrings = function(s) {
    var count = 0;
    var left, right;
    
    // If the palindrome is odd
    for(let i=0; i<s.length; i++){
        left = i; right = i; 
        
        while(left >= 0 && right <= s.length){
            if(s[left] == s[right]){
                count++;
                left--; right++;
            }
            else break;
        }
    }
    
    // If the palindrome is even
    for(let i=0; i<s.length; i++){
        left = i; right = i+1; 
        
        while(left >= 0 && right <= s.length){
            if(s[left] == s[right]){
                count++;
                left--; right++;
            }
            else break;
        }
    }
    
    return count
};