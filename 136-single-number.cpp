class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto x : nums)
            mp[x] ++;
        for(auto x : nums)
            if(mp[x] == 1) return x;
        return -1;
    }
};
