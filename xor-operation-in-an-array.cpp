class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> num;
        for(int i=0; i<n; i++){
            num.push_back(start);
            start+=2;
        }
        
        int ans = num[0];
        
        for(int i=1; i<n; i++){
            ans = ans^num[i];
        } 
        
        return ans;
    }
};
