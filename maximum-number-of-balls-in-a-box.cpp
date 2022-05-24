class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        int ans[46] = {};
        for(int i=lowLimit; i<=highLimit; i++){
            int sum = 0;
            int tmp = i;
            while(tmp){
                sum += tmp%10;
                tmp /= 10;
            }
            ans[sum]++;
        }
        return *max_element(begin(ans), end(ans)); 
    }
};
