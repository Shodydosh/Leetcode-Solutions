class Solution {
public:
    int bitCal(int n){
        int res = 0;
        while(n!=0){
            res += n%2;
            n/=2;
        }
        return res;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0; i<=n; i++) ans.push_back(bitCal(i));
        return ans;
    }
};