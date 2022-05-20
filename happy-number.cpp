class Solution {
public:
    bool isHappy(int n) {
        int tmp = 0;
        while(n>0){ 
            tmp += (n%10)*(n%10);
            n /= 10;
        }
        n = tmp;
        
        int check[100000] = {};
        
        while(n != 1){
            if(check[n] == 1){
                return false;
            }
            else check[n] = 1;
            tmp = 0;
            while(n > 0){
                tmp += (n%10)*(n%10);
                n /= 10;
            }
            n = tmp;
        }
        return true;
    }
};
