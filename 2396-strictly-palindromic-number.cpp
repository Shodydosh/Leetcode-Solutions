class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        for(int i=2; i<= n-2; i++){
            vector<int> a;
            int tmp = n;
            while(tmp){
                a.push_back(tmp % i);
                tmp /= i;
            }
            for(int j=0; j<=a.size()/2; j++){
                if(a[j] != a[a.size()-1-j]){
                return 0;
                }
            }

        }
        return 1;
    }
};
