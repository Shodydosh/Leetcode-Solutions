class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            if(i >= 1 && nums[i] == nums[i-1]) continue;
            
            int left = i+1;
            int right = nums.size()-1;
            
            while(left < right){
                int sum = nums[left] + nums[i] + nums[right];
                
                if(sum > 0){
                    right--; continue;
                }
                
                if(sum < 0){
                    left++; continue;
                }
                
                if(sum == 0){
                    vector<int> tmp;
                    tmp.push_back(nums[i]);                                             tmp.push_back(nums[left]);
                    tmp.push_back(nums[right]);
                    
                    ans.push_back(tmp);
                    
                    while( left < right && nums[left] == nums[left+1] ) left++;
                    while( left < right && nums[right] == nums[right-1]) right--;
                }
                
                left++, right--;
            }
        }
        
        return ans;
    }
};