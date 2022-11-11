class Solution {
public:
    int averageValue(vector<int>& nums) {
        int sum=0;
        int cnt=0;
        for(int x : nums){
            if(x%6 == 0){
                sum += x;
                cnt += 1;
            }
        }
        return (!cnt) ? 0 : sum/cnt;
    }
};
