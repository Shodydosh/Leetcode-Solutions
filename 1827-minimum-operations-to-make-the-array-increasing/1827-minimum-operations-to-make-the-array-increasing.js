/**
 * @param {number[]} nums
 * @return {number}
 */
var minOperations = function(nums) {
        let ans = 0;
        for(let i=0; i<nums.length-1; i++){
            if(nums[i+1] <= nums[i]){
                ans += nums[i]+1-nums[i+1];
                nums[i+1] = nums[i] + 1;
            }
        }
        return ans;
};