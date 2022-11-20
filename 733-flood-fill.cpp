class Solution {
public:    
    void DFS(vector<vector<int>>& image, int x, int y, int color, int tmp){
        int row = image.size();
        int col = image[0].size();

        if(x < 0 || x >= row || y < 0 || y >= col || image[x][y] == color) return;

        if(image[x][y] == tmp){
            image[x][y] = color;

            DFS(image, x+1, y, color, tmp);
            DFS(image, x-1, y, color, tmp);
            DFS(image, x, y+1, color, tmp);
            DFS(image, x, y-1, color, tmp);
        }

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        DFS(image, sr, sc, color, image[sr][sc]);
        return image;
    }
};
