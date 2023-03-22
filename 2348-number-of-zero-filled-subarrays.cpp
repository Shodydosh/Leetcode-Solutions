class Solution {
public:
    long long cal(int n){
        long long res = 0;
        for(int i=n; i>=1; i--)
            res += n-i + 1;
        return res;
    }
    long long zeroFilledSubarray(vector<int>& nums) {
        int cnt = 0;
        long long res = 0;
        for(auto x : nums){
            if(x == 0){
                cnt++;
            }
            else {
                if(cnt){
                    res += cal(cnt);
                    cnt=0;
                }
            }
        }
        if(cnt){
            res += cal(cnt);
            cnt=0;
        }
        return res;
    }
};
