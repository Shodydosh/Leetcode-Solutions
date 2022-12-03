class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int cnt=0;
        for(auto x : arr1){
            int check = 0;
        
            for(auto y : arr2){
                if(abs(x - y) <= d){
                    check = 1;
                    break;
                }
            }

            if(!check) cnt++; 
        }
        return cnt;
    }
};
