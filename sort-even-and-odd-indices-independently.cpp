class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> odd;
        vector<int> even;
        vector<int> ans;
        
        for(int i=0; i<nums.size(); i++){
            if(i%2==0) odd.push_back(nums[i]);
            else even.push_back(nums[i]);
        }
        
        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());
        
        int y = 0;
        int z = even.size()-1;

        for(int i=0; i<nums.size(); i++){
            if(i%2==0){
                ans.push_back(odd[y]);
                y++;
            }
            else{
                ans.push_back(even[z]);
                z--;
            } 
        }
        
        return ans;
    }
};
