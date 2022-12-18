class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n));
        if(n == 1) return {{1}};
        int val = 1;
        int rowBegin = 0, colBegin = 0;
        int rowEnd = n-1, colEnd = n-1;
        while(rowBegin <= rowEnd && colBegin <= colEnd){ 
            for(int i=rowBegin; i<= rowEnd; i++)
                ans[colBegin][i] = val++;
            colBegin++;
            for(int i=colBegin; i<= colEnd; i++)
                ans[i][rowEnd] = val++;
            rowEnd--;
            for(int i=rowEnd; i >= rowBegin; i--)
                ans[colEnd][i] = val++;
            colEnd--;
            for(int i=colEnd; i >= colBegin; i--)
                ans[i][rowBegin] = val++;
            rowBegin++;
        }
        
        return ans;
    }
};
