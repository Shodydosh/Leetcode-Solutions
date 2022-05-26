class Solution {
public:
    int check(int x){
        int odd = 0;
        while(x){
            int tmp;
            tmp = x % 10;
            if(tmp % 2 == 1) odd++;
            x/=10;
        }
        if(odd % 2 == 0) return 1;
        else return 0;
    }
    int countEven(int num) {
        int ans = 0;
        for(int i=1; i<=num; i++) if(check(i) == 1) ans++;
        return ans;
    }
};
