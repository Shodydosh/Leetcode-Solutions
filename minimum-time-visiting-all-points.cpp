class Solution {
public:
    int calculate(int x1, int y1, int x2, int y2){
        int xRange = abs(x1 - x2);
        int yRange = abs(y1 - y2);
        if(xRange > yRange) return xRange;
        else return yRange;
    }
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans = 0;
        for(int i=0; i<points.size()-1; i++){
            ans += calculate(points[i][0], points[i][1], points[i+1][0], points[i+1][1]);
        }
        return ans;
    }
};
