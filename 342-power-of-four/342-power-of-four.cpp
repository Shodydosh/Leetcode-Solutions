class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n == 0) return false;
        if(n == 1 || n == 4 || n == 16){
            return true;
        }
        else{
            if(n % 16 == 0){
                return isPowerOfFour(n/16);
            }
            else{
                return false;
            }
        }
    }
};