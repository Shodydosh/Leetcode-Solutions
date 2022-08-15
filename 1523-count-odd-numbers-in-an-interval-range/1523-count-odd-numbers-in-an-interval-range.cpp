class Solution {
public:
    int countOdds(int low, int high) {
        int minus = high - low;
        if(minus % 2 == 0){
            if(high % 2 == 0){
                return minus/2;
            } else {
                return minus/2+1;
            }
            
        } else {
            return (minus+1)/2;
        }
    }
};