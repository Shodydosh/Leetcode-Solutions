class Solution {
public:
    int compare(vector<int> a, vector<int> b){
        if(a.size() != b.size()) return 0;
        int chk = 1;
        for(int i=0; i<a.size(); i++){
            if(a[i] != b[i]){
                chk = 0;
                break;
            }
        }
        return chk;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        for(int i=0; i<pow(2, n); i++){
            string s = bitset<20>(i).to_string();
            s = s.substr(20-n, n);
            vector<int> tmp;
            for(int j=0; j<s.size(); j++){
                if(s[j] == '1') tmp.push_back(nums[j]);
            }
            sort(tmp.begin(), tmp.end());
            int chk = 0;
            for(auto x : ans){
                if(compare(x, tmp)){
                    chk = 1;
                    break;
                }
            }
            if(chk) continue;
            ans.push_back(tmp);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
