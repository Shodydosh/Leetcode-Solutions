class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> m{};
        
        for(auto &n : nums){
            m[n]++;
        }
        
        map<int, priority_queue<int>> temp{};
        
        for(auto &p : m){
            temp[p.second].push(p.first);
        }
        
        vector<int> ans;
        int val{};
        
        for(auto &p : temp){
            while(!p.second.empty()){
                val = p.second.top();
                p.second.pop();
                
                for(int i=1; i<=p.first; i++){
                    ans.push_back(val);
                }
            }
        }
        
        return ans;
    }
};
