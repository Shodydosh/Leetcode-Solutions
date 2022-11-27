class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        vector<int> dir = {-1, 0, 1, 0, -1};
        // dir for BFS

        queue<pair<int, int>> rottenGrid;
        // this queue stores rotten oranges's coordinate

        int freshO = 0; // nums of fresh oranges

        // count nums of fresh oranges and find the coordinate of rotten orange
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j] == 1) freshO++;
                else if(grid[i][j] == 2) rottenGrid.push({i, j});
            }
        }

        // no orange is fresh
        if(!freshO) return 0;
        int days = 0;

        while(!rottenGrid.empty()){
            int numOfRotten = rottenGrid.size();
            while(numOfRotten--){
                pair<int, int> tmp = rottenGrid.front();
                rottenGrid.pop();

                for(int i=0; i<4; i++){
                    int x = tmp.first + dir[i];
                    int y = tmp.second + dir[i+1];
                    if(x>=0 && y>=0 && x<grid.size() && y <grid[0].size()){
                        if(grid[x][y] == 1){
                            grid[x][y] = 2;
                            freshO--;
                            rottenGrid.push({x, y});
                        }
                    }
                }
            }
            days++;
        }

        // if still some fresh orange left
        if(freshO > 0) return -1;
        return days-1;
    }
};
