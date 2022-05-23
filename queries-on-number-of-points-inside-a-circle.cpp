class Solution {
public:
    int Check(int x1, int y1, int x2, int y2, int r){
        double dis = sqrt(1.0*abs(x1-x2)*1.0*abs(x1-x2) + 1.0*abs(y1-y2)*1.0*abs(y1-y2));
        
        if(dis <= r) return 1;
        else return 0;
    }
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans;
        for(int i=0; i<queries.size(); i++){
            int tmp = 0;
            
            for(int j=0; j<points.size(); j++){
                if(Check(points[j][0], points[j][1], queries[i][0], queries[i][1], queries[i][2])) tmp++;
            }
            
            
            ans.push_back(tmp);
        }
        return ans; 
    }
};
