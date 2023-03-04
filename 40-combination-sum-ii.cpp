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
            if(j > i && nums[j] == nums[j-1]) continue;
            tmp.push_back(nums[j]);
            Try(j+1, target, sum+nums[j],nums);
            tmp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        Try(0, target, 0, candidates);
        sort(ans.begin(), ans.end());
        return ans;
    }
};
