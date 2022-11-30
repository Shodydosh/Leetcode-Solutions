class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
        if(right == 0) return nums[0];
        if(nums[0] < nums[right]) return nums[left];
        if(nums[right] < nums[right-1]) return nums[right];
        // the array is ascendingly sorted

        while(left <= right) {
            int mid = left + (right - left) / 2;

            if(nums[mid] > nums[mid+1]) return nums[mid+1];

            if(nums[mid] > nums[right]){
                // the right half is not sorted
                left = mid+1;
            }
            else {
                // the left half is not sorted
                right = mid;
            }
        }

        return nums[left];
    }
};
