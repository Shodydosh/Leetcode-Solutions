class Solution {
public:
    int cal(int x1, int y1, int x2, int y2){
        return abs(x1 - x2) + abs(y1 - y2);
    }
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int ans = -1;
        int minVal = INT_MAX;
        for(int i=0; i<points.size(); i++){
            if(points[i][0] == x || points[i][1] == y){
                int tmp = cal(x, y, points[i][0], points[i][1]);
                if(tmp < minVal){
                    minVal = tmp;
                    ans = i;
                }
            }
        }
        return ans;
    }
};
