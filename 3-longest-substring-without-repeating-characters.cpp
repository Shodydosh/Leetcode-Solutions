class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = 0;
        int maxLen = 0;
        int j = 0;
        map<char, int> mp;
        for(int i=0; i<s.length(); i++){
            len++;
            mp[s[i]]++;
            while(mp[s[i]] > 1){
                mp[s[j]]--;
                j++;
                len--;
            }

            if(len > maxLen) maxLen = len;
        }

        return maxLen;
    }
};
