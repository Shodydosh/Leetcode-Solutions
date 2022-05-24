class Solution {
public:
    int Pow(int n){
        int ans = 1;
        while(n--){
            ans *= 10;
        }
        return ans;
    }
    
    int toBase(int n, int k){
        int index = 0;
        int ans = 0;
        while(n){
            ans += (n%k)*Pow(index++);
            n /= k;
        }
        return ans;
    }
    
    int Sum(int n){
        int ans = 0;
        while(n){
            ans += n%10;
            n /= 10;
        }
        return ans;
    }
    
    int sumBase(int n, int k) {
        return Sum(toBase(n, k));
    }
};
