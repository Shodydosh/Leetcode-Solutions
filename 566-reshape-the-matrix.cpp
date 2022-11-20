class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> ans;
        vector<int> tmp;

        int a = mat.size(); 
        int b = mat[0].size(); 

        if(a * b != r * c) return mat;

        for(int i=0; i<a; i++){
            for(int j=0; j<b; j++){
                tmp.push_back(mat[i][j]);
                if(tmp.size() == c){
                    ans.push_back(tmp);
                    tmp.clear();
                }
            }
        }

        return ans;
    }
};
