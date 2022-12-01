class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        
        vector<int> dp1(n+1, 0), dp2(n+1, 0);
    
        dp1[1] = nums[0];
        for(int i=1; i<n-1; i++)
            dp1[i+1] = max(dp1[i], dp1[i-1] + nums[i]);
        for(int i=1; i<n; i++)
            dp2[i+1] = max(dp2[i], dp2[i-1] + nums[i]);

        // return dp1[n-1];
        return max(dp1[n-1], dp2[n]);
    }
};
