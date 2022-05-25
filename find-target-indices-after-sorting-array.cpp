class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] == target && nums[i+1] != target){
                ans.push_back(i);
                break;
            }
            if(nums[i] == target) ans.push_back(i);
        }
        if(nums[nums.size()-1] == target) ans.push_back(nums.size()-1);
        return ans;
    }
};
