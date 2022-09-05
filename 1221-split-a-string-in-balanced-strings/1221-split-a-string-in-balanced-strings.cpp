class Solution {
public:
    int balancedStringSplit(string s) {
        int ans = 0;
        int c1 = 0, c2 = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == 'L') c1++;
            if(s[i] == 'R') c2++;
            if(c1 == c2 && c1 != 0) ans++;
        }
        if(c1 != c2) return 0;
        else return ans;
    }
};