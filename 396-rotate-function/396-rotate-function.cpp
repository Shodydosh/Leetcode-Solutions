class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int sum = 0;
        int f = 0;
        
        for(int i=0; i<nums.size(); i++){
            f += i*nums[i];
            sum += nums[i];
        }
        
        int maxVal = f;
        for(int i=0; i<nums.size(); i++){
            f = f + sum - nums[nums.size()-1-i] * nums.size();
            if(f > maxVal) maxVal = f;
        }
        return maxVal;
    }
};