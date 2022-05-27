class Solution {
public:
    int totalMoney(int n) {
        int total = 0;
        int weeks = n/7;
        if(weeks == 0){
            for(int i=1; i<=n; i++){
                total += i;
            }
        }
        else{
            int monday;
            for(int i=1; i<=weeks; i++){
                monday = i;
                for(int j=i; j<=i+6; j++){
                    total += j;
                }
            }
            
            int left = n % 7;
            for(int i=monday+1; i<monday+1+left; i++){
                total += i;
            }
            
        }
        return total;
    }
};
