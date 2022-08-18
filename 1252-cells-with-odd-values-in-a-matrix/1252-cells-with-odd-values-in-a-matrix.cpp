class Solution
{
public:
    int oddCells(int m, int n, vector<vector<int>> &indices)
    {
        vector<vector<int>> v(m, vector<int>(n, 0));

        for (int i = 0; i < indices.size(); i++)
        {
            int row = indices[i][0];
            int col = indices[i][1];

            for (int i = 0; i < m; i++)
            {
                v[i][col]++;
            }

            for (int i = 0; i < n; i++)
            {
                v[row][i]++;
            }
        }
        int res = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (v[i][j] % 2 != 0)
                    res++;
            }
        }

        return res;
    }
};