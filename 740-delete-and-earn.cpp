class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        int n = nums.size();

        vector<int> sum(10000, 0), dp(10000, 0);
        for(auto x : nums) sum[x-1] += x;

        dp[0] = sum[0]; // initial condition
        dp[1] = max(sum[0], sum[1]); // initial condition

        for(int i=2; i<10000; i++){
            if(sum[i] == 0) dp[i] = dp[i-1]; // dp[i] = max(dp[i-1], dp[i-2] + 0);
            else dp[i] = max(dp[i-1], dp[i-2] + sum[i]);
            // dp[i] là biến lưu giá trị đã đạt được đến vị trí index i
            // dp[i] is the variable which stores the sum of all values gained until index i

            // sum[i] là biến lưu giá trị đạt được nếu xóa các số i+1
            // sum[i] is the variable which store the value to add into dp if we choose to delete number (i+1)
        }

        return dp[9999];
    }
};
