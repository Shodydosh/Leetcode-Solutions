class Solution {
public:
    int handleSquare(int n){
        if(n >= 0 && n <= 9) return n;
        
        long long a = 0;
        while(n){
            a += pow(n%10, 2);
            n/=10;
        }
        int ans = handleSquare(a);
        return ans;
    }

    bool isHappy(int n) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int ans = handleSquare(n);
        if(ans == 1 || ans == 7){
            return 1;
        }
        else{
            return 0;
        }
    }
};
