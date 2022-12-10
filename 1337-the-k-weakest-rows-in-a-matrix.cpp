class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        set<pair<int, int>> se1;
        for(int i=0; i<mat.size(); i++){
            int tmp = accumulate(mat[i].begin(), mat[i].end(), 0);
            se1.insert({tmp, i});
        }
        vector<int> ans;
        for(auto it = se1.begin(); k>0; it++, k--){
            ans.push_back(it->second);
        }
        return ans;
    }
};
