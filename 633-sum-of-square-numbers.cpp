class Solution {
public:
    bool judgeSquareSum(int c) {
        long long int l = 0;
        long long int r = sqrt(c);
        while(l <= r){
            long long int tmp = l*l + r*r;
            if(tmp > c) r--;
            else if(tmp < c) l++;
            else return true;
        }
        return false;
    }
};
