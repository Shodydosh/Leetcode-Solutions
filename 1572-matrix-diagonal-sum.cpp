class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int si = mat.size();
        for(int i=0; i<si; i++){
            sum += mat[i][si-1-i];
            sum += mat[i][i];
        }
        if(si % 2 == 1){
            sum -= mat[si/2][si/2];
        }
        return sum;
    }
};
