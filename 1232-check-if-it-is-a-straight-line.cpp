class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        if(coordinates.size() <= 1) return 0;
        if(coordinates.size() == 2) return 1;

        int x0 = coordinates[0][0];
        int y0 = coordinates[0][1];
        int dx = coordinates[1][0] - x0;
        int dy = coordinates[1][1] - y0;

        for(int i=1; i<coordinates.size(); i++){
            int x = coordinates[i][0];
            int y = coordinates[i][1];

            if(dy * (x-x0) != dx * (y-y0)){
                return 0;
            }
        }
        return 1;
    }
};
