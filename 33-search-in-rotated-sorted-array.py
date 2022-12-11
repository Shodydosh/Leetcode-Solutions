class Solution(object):
    def search(self, nums, target):
        l = 0
        r = len(nums)-1
        while(l <= r):
            m = l + (r-l)/2
            if(nums[m] == target): return m
            if(nums[m] >= nums[l]):
                # the left half is sorted ascendingly
                # the condition is to make sure the target is on the right half
                if (target >= nums[l] and target < nums[m]): r=m-1
                else: l = m+1    
            else:
                # the right half is sorted ascendingly
                # the condition is to make sure the target is on the right half
                if (target >= nums[m] and target <= nums[r]): l=m+1
                else: r=m-1   
        return -1
