class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int matrix[m][n];
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                matrix[i][j] = 0;
            }
        }
        
        int ans = 0;
        
        for(int z = 0; z < indices.size(); z++){
            // cout << indices[z][0] << '-' << indices[z][1] << endl;
            
            //vertical  
            for(int i=0; i<m; i++){
                // 
                matrix[i][indices[z][1]] ++;
                if (matrix[i][indices[z][1]] % 2 == 1) ans++;
                else ans--;
            }
            
            //horizontal
            for(int i=0; i<n; i++){
                matrix[indices[z][0]][i] ++;
                if (matrix[indices[z][0]][i] % 2 == 1) ans++;
                else ans--;
            }
            
            // cout << ans << endl;

        }
        
        return ans;
    }
};