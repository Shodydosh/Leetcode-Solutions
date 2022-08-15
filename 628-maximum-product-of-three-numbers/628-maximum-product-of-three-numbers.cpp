class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        if(nums.size() == 3) return nums[0]*nums[1]*nums[2];
        else {
            sort(nums.begin(), nums.end());
            if(nums[0] < 0 && nums[1] > 0){
                return nums[nums.size()-1] * nums[nums.size()-2] * nums[nums.size()-3];
            } else if(nums[0] < 0 && nums[1] < 0 && nums[nums.size()-1] >= 0){
                int tmp1 = nums[nums.size()-1] * nums[nums.size()-2] * nums[nums.size()-3];
                int tmp2 = nums[0] * nums[1] * nums[nums.size()-1];
                return max(tmp1, tmp2);
            } else {
                return nums[nums.size()-1] * nums[nums.size()-2] * nums[nums.size()-3];
            }
        }
    }
};