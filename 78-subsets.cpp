class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        for(int i=0; i<pow(2, n); i++){
            string s = bitset<20>(i).to_string();
            s = s.substr(20-n, n);
            vector<int> tmp;
            for(int j=0; j<s.size(); j++){
                if(s[j] == '1') tmp.push_back(nums[j]);
            }
            ans.push_back(tmp);
        }
        return ans;
    }
};
