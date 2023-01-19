class Solution:
    def maxSubArray(self, nums):
        Max = nums[0]
        Sum = 0
        for num in nums:
            Sum += num
            Max = max(Max, Sum)
            if Sum<0:
                Sum = 0
        return Max
