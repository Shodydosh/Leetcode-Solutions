class Solution {
public:
    int climbStairs(int n) {
        if(n <= 0) return 0;
        if(n <= 2) return n;
        int a[50];
        a[1] = 1;
        a[2] = 2;
        for(int i=3; i<=n; i++){
            a[i] = a[i-1] + a[i-2];
        }
        return a[n];
    }
};
