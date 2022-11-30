class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;

        while(left <= right){
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) return mid;
            
            if (nums[mid] >= nums[left]){
                // means that the left half is sorted ascendingly
                // ex: 4 5 6 7 0 1 2 
                if(target >= nums[left] && target < nums[mid]) right = mid-1;
                else left = mid+1;
            }
            else {
                // nums[mid] < nums[left]
                // means that the right half is sorted ascendingly
                // ex: 7 0 1 2
                if(target > nums[mid] && target <= nums[right]) left = mid+1;
                else right = mid-1;
            }
        }
        return -1;
    }
};
