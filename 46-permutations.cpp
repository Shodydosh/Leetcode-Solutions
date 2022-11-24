class Solution {
public:
    vector<vector<int>> ans;
    vector<int> tmp;
    int visited[505] = {0};

    void rendering(int i, vector<int>& nums) {
        if(i > nums.size()) return;
        if(i == nums.size()){
            ans.push_back(tmp);
            return;
        }

        for(int j=0; j<nums.size(); j++){
            if(visited[j] == 0){
                tmp.push_back(nums[j]);
                visited[j] = 1;
                rendering(i+1, nums);
                visited[j] = 0;
                tmp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        rendering(0, nums);
        return ans;
    }
};
