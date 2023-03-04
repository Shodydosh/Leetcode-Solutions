class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long res = 0;
        int j = -1;
        int maxIn = -1;
        int minIn = -1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] < minK || nums[i] > maxK)
                j = i;
            if(nums[i] == maxK)
                maxIn = i;
            if(nums[i] == minK)
                minIn = i;

            res += max(0, min(maxIn, minIn) - j);
        }
        return res;
    }
};
