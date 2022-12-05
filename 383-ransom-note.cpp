class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> cnt;
        for(auto x : magazine) cnt[x]++;
        for(auto x : ransomNote){
            if(cnt[x] <= 0) return 0;
            cnt[x]--;
        }
        return 1;
    }
};
