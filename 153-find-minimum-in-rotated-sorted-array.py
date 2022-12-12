class Solution(object):
    def findMin(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        left = 0
        right = len(nums)-1

        if(right == 0): return nums[0]
        if(nums[0] < nums[right]): return nums[left]
        if(nums[right] < nums[right-1]): return nums[right]
        # => array is ascendingly sorted

        while(left<=right):
            mid = left + ((right - left)/2)
            if(nums[mid] > nums[mid+1]): return nums[mid+1]
            if(nums[mid] > nums[right]):
                # right half is not sorted
                left = mid+1
            else:
                # left half is not sorted
                right = mid
        return nums[left]
        
