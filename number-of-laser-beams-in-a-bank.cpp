class Solution {
public:
    int count(string s){
        int ans = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '1') ans++;
        }
        return ans;
    }
    
    int numberOfBeams(vector<string>& bank) {
        // mỗi string là một hàng chỉ bao gồm 0 và 1
        
        int temp = 0;
        int res = 0;
        for(int i=0; i<bank.size(); i++){
            if(count(bank[i]) != 0){
                if(temp == 0){
                    temp = count(bank[i]);
                }
                else{
                    res += temp * count(bank[i]);
                    temp = count(bank[i]);
                }
            }
        }
        return res;
    }
};
