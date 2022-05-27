class Solution {
public:
    int tribonacci(int n) {
        if(n == 0) return 0;
        if(n == 1 || n == 2) return 1;
        int a0 = 0, a1 = 1, a2 = 1;
        n -= 2;
        while(n--){
            int temp = a2;
            a2 = a0 + a1 + a2;
            a0 = a1; a1 = temp;
        }
        return a2;
    }
};
