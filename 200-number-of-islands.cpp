class Solution {
public:
    int cnt = 0;
    void run(vector<vector<char>>& grid, int i, int j){
        if(i < 0 || j < 0 || i>grid.size()-1 || j >grid[0].size()-1 || grid[i][j] == '0') return;
        grid[i][j] = '0';
        run(grid, i, j+1);
        run(grid, i, j-1);
        run(grid, i+1, j);
        run(grid, i-1, j);
    }
    int numIslands(vector<vector<char>>& grid) {
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++){
                if(grid[i][j] == '1'){
                    run(grid, i, j);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
