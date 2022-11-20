class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxVal = 0;
        int tmp = 0;
        for(int i=0; i<accounts.size(); i++){
            tmp = 0;
            for(int j=0; j<accounts[i].size(); j++){
                tmp += accounts[i][j];
            }
            maxVal = max(maxVal, tmp);
        }
        return maxVal;
    }
};
