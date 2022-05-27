class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ans;
        int candy = 1;
        
        while(ans.size() != num_people){
            if(candies == 0){
                ans.push_back(0);
            }
            else{
                if(candies > candy){
                    ans.push_back(candy);
                    candies -= candy;
                    candy++;
                }
                else{
                    ans.push_back(candies);
                    candies = 0;
                }
            }
        }
        
        while(candies > 0){
            for(int i=0; i<num_people; i++){
                if(candies > candy){
                    ans[i] += candy;
                    candies -= candy;
                    candy++;
                }
                else{
                    ans[i] += candies;
                    candies = 0;
                }
            }
        }
        
        return ans;
    }
};
