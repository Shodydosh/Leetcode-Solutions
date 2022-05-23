class Solution {
public:
    double myPow(double x, long long int n) {
        if(n<0) {
            x = 1.0/x;
            n = n*(-1);            
        }
        
        if(n==0) return 1;
        if(n==1) return x;
        
        double half = myPow(x, n/2);
        double full = half*half;
        if(n%2 == 1) return full*x;
        else return full;
    }
};
