class Solution {
public:
    vector<string> ans;
    string tmp;

    void rendering(int i, string s){
        if(i > s.length()) return;

        if(i == s.length()){
            ans.push_back(tmp);
            return;
        }
        tmp.push_back(s[i]);
        rendering(i+1, s);
        tmp.pop_back();
        if(isalpha(s[i])){
            s[i] ^= (1 << 5);
            tmp.push_back(s[i]);
            rendering(i+1, s);
            tmp.pop_back();
        }
    }

    vector<string> letterCasePermutation(string s) {
        rendering(0, s);
        return ans;
    }
};
