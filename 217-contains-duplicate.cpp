class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        set<int> a;
        for(auto x : nums) a.insert(x);
        return (a.size() == nums.size()) ? 0 : 1;
    }
};
