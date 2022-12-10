class Solution {
public:
    int countRow(vector<int> v){
        int cnt = 0;
        int left = 0;
        int right = v.size()-1;
        while(left <= right){
            int mid = left + (right-left)/2;
            if(v[mid] >= 0) left = mid+1;
            else right = mid-1;
        }
        return v.size() - left;
    }

    int countNegatives(vector<vector<int>>& grid) {
        int res = 0;
        for(auto a : grid){
            int tmp = countRow(a);
            res += tmp;
        }
        return res;
    }
};
