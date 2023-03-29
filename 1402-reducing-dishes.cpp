class Solution {
public:
    int maxSatisfaction(vector<int>& sat) {
        sort(sat.begin(), sat.end(), greater<>());
        int n = sat.size();
        int res = 0, tmp = 0;
        for(int i=0; i<n; i++){
            tmp += sat[i];
            if(tmp < 0) break;
            res += tmp;
        }
        return res;
    }
};
