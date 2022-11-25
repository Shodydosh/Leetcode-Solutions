class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int a = -1;
       for(int i=1; i<nums.size(); i++){
           
           if(nums[i] > nums[i-1]){
               a = 1;
               break;
           } 
           else if(nums[i] < nums[i-1]) {
               a = 0;
               break;
           }
       }

       if(a == -1) return true;

       if(a == 1){
           for(int i=1; i<nums.size(); i++)
               if(nums[i] < nums[i-1]) return 0; 
       } else {
           for(int i=1; i<nums.size(); i++)
               if(nums[i] > nums[i-1]) return 0; 
       }
       return 1;
    }
};
