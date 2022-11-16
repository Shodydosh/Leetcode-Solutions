class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cnt = 0;
        vector<int> a;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]) a.push_back(nums[i]);
            else cnt ++;
        }

        for(int i=0; i<cnt; i++) a.push_back(0);
        nums = a;
    }
};
