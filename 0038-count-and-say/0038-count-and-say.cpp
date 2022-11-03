class Solution {
    string s = "1";
public:
    string countAndSay(int n) {
        if(n == 1) return "1";
        if(n == 2) return "11";
        
        string s = countAndSay(n-1);
        int count = 1;
        int tmp = s[0];
        string ans = "";
        for(int i=1; i<s.length(); i++){
            if(s[i] == tmp) count++;
            else{
                ans += to_string(count);
                ans += tmp;
                // reset
                count = 1;
                tmp = s[i];
            }
        }
        ans += to_string(count);
                ans += tmp;
        return ans;

    }
};