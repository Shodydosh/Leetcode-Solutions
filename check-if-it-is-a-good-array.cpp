class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        if(nums.size() == 1 && nums[0] == 1) return true;
        
        int tmp = nums[0];
        for(int i=1; i<nums.size(); i++){
            tmp = __gcd(tmp, nums[i]);
            if(tmp == 1) return true;
        }
        return false;
    }
};
