/*
Let the matrix be
1 1
1 1
There are 5 squares in total 4 of side 1 and 1 of side 2
after applying this 
matrix becomes
1 1
1 2
sumof all the elements in the matrix is the total number of squares
*/
class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int ans = 0;
        
        for(int i=1; i<matrix.size(); i++){
            for(int j=1; j<matrix[0].size(); j++){
                if(matrix[i][j] == 1){
                    matrix[i][j] += min(matrix[i-1][j-1], min(matrix[i-1][j], matrix[i][j-1]));                    
                }
            }
        }
        
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                ans += matrix[i][j];
            }
        }
        
        return ans;
    }
};