class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(p.size() > s.size()) return {};
        vector<int> ss(27, 0);
        vector<int> pp(27, 0);
        vector<int> ans;
        int n = p.size();
        for(int i=0; i<n; i++){
            pp[p[i] - 'a']++;
            ss[s[i] - 'a']++;
        }
        if(pp == ss) ans.push_back(0);
        for(int i=n; i<s.size(); i++){
            ss[s[i-n] - 'a']--;
            ss[s[i] - 'a']++;
            if(pp == ss) ans.push_back(i - n + 1);
        }

        return ans;
    }
};
