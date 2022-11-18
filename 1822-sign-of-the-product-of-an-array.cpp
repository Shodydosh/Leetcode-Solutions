class Solution {
public:
    int arraySign(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int ans = 1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0) return 0;
            else if(nums[i] > 0){
                continue;
            }
            else{
                ans *= -1;
            }
        }
        if(ans > 0) return 1;
        else return -1;
    }
};
