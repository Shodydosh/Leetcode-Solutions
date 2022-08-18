class Solution {
public:
    int check(int n){
        while(n>0){
            if(n%10 == 0) return 0;
            n /= 10;
        }
        return 1;
    }
    vector<int> getNoZeroIntegers(int n) {
        for(int i=1; i<=n/2; i++){
            if(check(i) == 1 && check(n-i) == 1) return {i, n-i};
        }
        return {};
    }
};