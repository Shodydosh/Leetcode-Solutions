class Solution {
public:
    int specialArray(vector<int>& nums) {
        vector<int> dp(1005, 0);
        vector<int> count(1005, 0);
        int n = nums.size()-1;
        for(int i=0; i<=n; i++) count[nums[i]]++;
        for(int i=1000; i>=0; i--) dp[i] = dp[i+1] + count[i];
        for(int i=1000; i>0; i--){
            if(dp[i] == i) return dp[i];
        }
        return -1;
    }
};
