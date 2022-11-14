class Solution
{
public:
    vector<vector<int>> diagonalSort(vector<vector<int>> &mat)
    {
        int width = mat[0].size();
        int height = mat.size();
        vector<int> tmp;

        for (int k = 0; k < width; k++)
        {
            tmp.clear();
            for (int i = 0, j = k; i < height && j < width; i++, j++)
                tmp.push_back(mat[i][j]);
            sort(tmp.begin(), tmp.end());
            for (int i = 0, j = k; i < height && j < width; i++, j++)
                mat[i][j] = tmp[i];
        }
        for (int k = 1; k < height; k++)
        {
            tmp.clear();
            for (int i = k, j = 0; i < height && j < width; i++, j++)
                tmp.push_back(mat[i][j]);
            sort(tmp.begin(), tmp.end());
            for (int i = k, j = 0; i < height && j < width; i++, j++)
                mat[i][j] = tmp[j];
        }

        return mat;
    }
};
