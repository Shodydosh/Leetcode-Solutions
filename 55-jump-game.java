class Solution {
    public boolean canJump(int[] nums) {
        int n = nums.length-1;
        while(n != 0){
            int tmp = n;
            for(int i=0; i<n; i++){
                if(nums[i] >= n-i) n = i;
            }
            if(n == tmp) break;
        }
        return (n == 0) ? true : false;
    }
}
