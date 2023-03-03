class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string tmp1 = "", tmp2 = "";
        int cnt = 0;
        int cnt1 = 0;
        for(int i=s.size()-1; i>=0; i--){
            if(s[i] == '#')
                cnt++;
            else {
                if(cnt > 0){
                    cnt--;
                    continue;
                }
                else tmp1 += s[i];
            }
            
        }
        for(int i=t.size()-1; i>=0; i--){
            if(t[i] == '#')
                cnt1++;
            else {
                if(cnt1 > 0){
                    cnt1--;
                    continue;
                }
                else tmp2 += t[i];
            }
        }
        cout << tmp1 << ' ' << tmp2 << endl;
        return (tmp1 == tmp2);
    }
};
