class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        int res = 0, check = 0;
        for(auto x : s) mp[x]++;
        for(auto x : mp){
            if(x.second%2){
                check = 1;
                res += x.second - 1;
            }
            else res += x.second;
        }
        if(check) return res+1;
        return res;
    }
};
