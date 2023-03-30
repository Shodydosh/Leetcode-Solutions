class Solution {
public:
    unordered_map<string, bool> mp;
    bool dp(string s1, string s2){
        int n = s1.length();
        if(s1.length() == 1) return s1 == s2;
        if(s1 == s2) return true;
        string k = s1 + s2;
        if(mp.find(k) != mp.end()) return mp[k];
        for(int i=1; i<n; i++){
            bool a1 = dp(s1.substr(0, i), s2.substr(0, i)) && dp(s1.substr(i), s2.substr(i)); // noswap
            bool a2 = dp(s1.substr(0, i), s2.substr(n-i)) && dp(s1.substr(i), s2.substr(0, n-i)); // swap
            if(a1 || a2){
                return mp[k] = true;
            }
        }
        return mp[k] = false;
    } 
    bool isScramble(string s1, string s2) {
        return dp(s1, s2);
    }
};
