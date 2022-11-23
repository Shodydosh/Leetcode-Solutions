class Solution {
public:
    string freqAlphabets(string s) {
        string ans = "";
        for(int i=0; i<s.size(); i++){
            string tmp;
            if(i+2<s.length() && s[i+2] == '#'){
               tmp = s.substr(i, 2);
               int t = stoi(tmp);
               ans += t+96;
               i+=2;
            }
            else {
                ans += (s[i]+48);
            }
        }
        return ans;
    }
};
