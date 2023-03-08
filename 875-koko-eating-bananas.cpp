class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());
        int left = 0, right = piles[piles.size()-1];
        if(piles.size() == 1){
            if(piles[0] % h == 0) return piles[0]/h;
            else return piles[0]/h + 1;
        }
        while(left < right){
            int mid = left + (right-left)/2;
            long long tmp = 0;
            for(int i=0; i<piles.size(); i++){
                if(piles[i] % mid != 0) tmp += piles[i] / mid + 1;
                else tmp += piles[i] / mid;
            }
            if(tmp > h) left = mid+1;
            else right = mid;
        }
        return left;
    }
};
