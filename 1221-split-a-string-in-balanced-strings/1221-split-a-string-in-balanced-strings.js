/**
 * @param {string} s
 * @return {number}
 */
var balancedStringSplit = function(s) {
    var ans = 0;
    var c1 = 0, c2 = 0;
    for(let i=0; i<s.length; i++){
        if(s[i] == 'R') c1++;
        if(s[i] == 'L') c2++;
        if(c1 == c2 && c1 != 0) ans++;
    }
        
    if(c1 != c2) return 0;
    else return ans;
};