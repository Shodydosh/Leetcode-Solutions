class Solution {
public:
    int subtractProductAndSum(int n) {
        int tmp1 = 1;
        int tmp2 = 0;
        while(n){
            tmp2 += (n%10);
            tmp1 *= (n%10);
            n/=10;
        }

        return tmp1 - tmp2;
    }
};
