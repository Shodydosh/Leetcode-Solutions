class Solution {
public:
    int cal(vector<int>& nums, int i, int n, vector<int>& dp){
        if(i >= n) return 0;

        if(dp[i] != -1){
            return dp[i];
        }
    
        int h1 = nums[i];
        int h2 = cal(nums, i+1, n, dp);
        int h3 = nums[i] + cal(nums, i+2, n, dp); 

        return dp[i] = max(max(h1, h2), max(h2, h3));
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        return cal(nums, 0, n, dp);
    }
};
