class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size()-1;
        while (n!=0) {
            int tmp = n; // var tmp to check if n is changed or not
            for(int i=0; i<n; i++){
                if(nums[i] >= n-i) n = i;
            }
            if(tmp == n) break;
        }

        return (!n) ? true : false; 
    }
};
