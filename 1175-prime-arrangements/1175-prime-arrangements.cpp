class Solution {
public:
    int PrimeCount(int n){
        if(n <= 1) return 0;
        int count = 0;

        vector<int> sieve(n+1, 1);

        // Count the amount of prime num using eratothenes sieve
        for(int i=2; i<=n; i++){
            if(sieve[i] == 1){
                count++;
                int tmp = i;
                for(int j=2; j<=n/i; j++){
                    sieve[j*i] = 0;
                } 
            }
        }
        
        return count;
    }
    
    long long FactorialCal(int n){
        int m = 1e9 + 7;
        if(n <= 1) return 1;
        else return (FactorialCal(n-1)*n) % m;
    }
    
    int numPrimeArrangements(int n) {
        int m = 1e9 + 7;
        int ans;
        
        int Prime = PrimeCount(n);
        int nonPrime = n - Prime;
        return ((FactorialCal(Prime)%m)*(FactorialCal(nonPrime)%m))%m;
    }
};