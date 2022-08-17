class Solution {
public:
    int getMaximumGenerated(int n) {
        int nums[n+1];
        int maxVal = 1;
        
        if (n == 1) return 1;
        if (n == 0) return 0;
        
        nums[0] = 0;
        nums[1] = 1;
        
        for(int i=0; i<=n; i++){
            if(i%2 == 0){
                nums[i] = nums[i/2];
            } else {
                nums[i] = nums[i/2]+nums[i/2 + 1];
            }
                
            maxVal = max(maxVal, nums[i]);
        }
        
        return maxVal;
    }
};