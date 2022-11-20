class Solution {
public:
    int tmp = 0;
    void DFS(vector<vector<int>>& grid, int checked[][405], int i, int j, int m, int n){
        if(i < 0 || j < 0 || i >= m || j >= n || checked[i][j] == 1) return;
        if(grid[i][j] == 0) return;
        tmp++;
        checked[i][j] = 1;
        DFS(grid, checked, i+1, j, m, n);
        DFS(grid, checked, i-1, j, m, n);
        DFS(grid, checked, i, j+1, m, n);
        DFS(grid, checked, i, j-1, m, n);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        int checked[405][405] = {};
        int maxS = 0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == 0 || checked[i][j] == 1) continue;
                else {
                    DFS(grid, checked, i, j, m, n);
                    if(tmp > maxS) maxS = tmp;
                    tmp = 0;
                }
            }
        }
        return maxS;
    }
};
