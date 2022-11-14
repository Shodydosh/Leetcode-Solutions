class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxVal = INT_MIN;
        for(int i=0; i<candies.size(); i++){
            if(maxVal < candies[i]){
                maxVal = candies[i];
            }
        }

        vector<bool> ans;
        for(int i=0; i<candies.size(); i++){
            if(maxVal <= candies[i] + extraCandies)
                ans.push_back(true);
            else 
                ans.push_back(false);
        }
        return ans;
    }
};
