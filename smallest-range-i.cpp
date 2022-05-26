class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int Max = INT_MIN;
        int Min = INT_MAX;
        for(int i: nums){
            Max = max(Max, i);
            Min = min(Min, i);
        }
        
        if(Max-k <= Min+k) return 0;
        else return Max-Min-2*k;
    }
};
