class Solution {
public:
    vector<vector<int>> ans;
    vector<int> tmp;
    void Try(int i, int target, int sum, vector<int> nums){
        if(sum > target) return;
        if(sum == target){
            ans.push_back(tmp);
            return;
        }

        for(int j = i; j<nums.size(); j++){
            tmp.push_back(nums[j]);
            Try(j, target, sum+nums[j],nums);
            tmp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        Try(0, target, 0, candidates);
        return ans;
    }
};
