class Solution {
public:
    int numberOfSteps(int num) {
        if(num == 0) return 0;
        int ans = 1;
        while(num!=1){
            if(num % 2 == 1) ans++;
            num /= 2;
            ans++;
        }
        return ans;
    }
};
