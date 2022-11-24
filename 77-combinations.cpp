class Solution {
public:
    vector<vector<int>> ans;
    vector<int> tmp;

    void rendering(int i, int n, int k) {
        if(i > n) return;

        if(tmp.size() == k){
            ans.push_back(tmp);
            return;
        }

        for(int j=i+1; j<=n; j++){
            tmp.push_back(j);
            rendering(j, n, k);
            tmp.pop_back();
        }
        
    }

    vector<vector<int>> combine(int n, int k) {
        rendering(0, n, k);
        return ans;
    }
};
