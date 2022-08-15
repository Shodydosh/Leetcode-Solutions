class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0) return "0";
        
        string ans = "";
        if(num < 0){
            ans += '-';
            num = abs(num);
        } 
        
        string tempStr = "";
        while(num != 0){
            int tmp = 48+num%7;
            tempStr += tmp;
            num /= 7;
        }
        
        reverse(tempStr.begin(), tempStr.end());
        ans += tempStr;
        return ans;
    }
};