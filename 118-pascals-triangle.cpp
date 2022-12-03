class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        ans.push_back({1});

        for(int i=1; i<numRows; i++){
            vector<int> tmp;
            tmp.push_back(1);
            for(int j=0; j<i-1; j++){
                tmp.push_back(ans[i-1][j] + ans[i-1][j+1]);
            }
            tmp.push_back(1);
            ans.push_back(tmp);
        }

        return ans;
    }
};
