class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            ans.push_back(pow(nums[i], 2));
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
