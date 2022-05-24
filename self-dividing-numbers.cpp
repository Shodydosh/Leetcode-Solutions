class Solution {
public:
    bool check(int x){
        vector<int> a;
        int temp = x;
        
        while(temp > 0){
            a.push_back(temp%10);
            temp /= 10;
        }
        
        for(int i=0; i<a.size(); i++){
            if(a[i] == 0) return false;
            if(x % a[i] != 0) return false;
        }
        return true;
    }
    
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left; i<=right; i++){
            if(check(i) == true){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
