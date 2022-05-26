class Solution {
public:
    int signFunc(int x){
        if(x>0) return 1;
        if(x<0) return -1;
        return 0;
    }
    int arraySign(vector<int>& nums) {
        int p = 1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0) return 0;
            if(nums[i]<0) p *= -1; 
        }
        return signFunc(p);
    }
};
