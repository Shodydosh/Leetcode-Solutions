class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxVal = INT_MIN;
        int tmpMax = 0;
        for(int i=0; i<n; i++){
            tmpMax = max(nums[i], tmpMax + nums[i]);
            maxVal = max(maxVal, tmpMax);
        }
        return maxVal;
    }
};
