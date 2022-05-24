class Solution {
public:
    int countTriples(int n) {
        int ans = 0;
        int x = n*n;
        
        
        for(int i=0; i<=n; i++){
            int a = i*i;
            for(int j=0; j<=n; j++){
                int b = j*j;
                if(a + b > x) break;
                for(int z = max(i, j)+1; z<=n; z++){
                    int c = z*z;
                    if(a+b == c){
                        ans++;
                        
                    }
                }
            }
        }
        return ans;
    }
};
