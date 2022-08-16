class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxValue = 0;
        int minP = INT_MAX;
        int maxP = 0;
        int mark = 0;
        
        for(int i=0; i<prices.size(); i++){
            if(prices[i] < minP){
                minP = prices[i];
                mark = i;
                maxP = 0;
            }
            if(prices[i] > maxP && i > mark){
                maxP = prices[i];
            }
            if(i > mark){
                maxValue = max(maxValue, (maxP-minP));
            }
        }
        
        return maxValue;
    }
};