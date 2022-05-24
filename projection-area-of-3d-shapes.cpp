class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int maxX=0, maxY=0, maxZ=0;
        int z[55];
        
        // maxX
        int maxLen = 0;
        for(int i=0; i<grid.size(); i++){
            maxX += grid[i].size();
            if(grid[i].size() > maxLen) maxLen = grid[i].size();
        }
        
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++){
                if(grid[i][j] == 0) maxX--;
            }
        }
        
        
        for(int i=0; i<55; i++){
            z[i] = INT_MIN;
        }
        
        // maxY
        
        for(int i=0; i<grid.size(); i++){
            int max = INT_MIN;
            for(int j=0; j<grid[i].size(); j++){
                if(grid[i][j] > z[j]) z[j] = grid[i][j];
                if(max < grid[i][j]) max = grid[i][j];
            }
            
            maxY += max;
        }
        
        // maxZ
        
        for(int i=0; i<maxLen; i++){
            maxZ += z[i];
        }
        
        return maxZ+maxX+maxY;
    }
};
