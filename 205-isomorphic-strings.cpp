class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> mp;
        map<char, char> mp2;
        for(int i=0; i<s.size(); i++){
            if(mp[s[i]] == NULL){
                if(mp2[t[i]] == NULL){
                    mp[s[i]] = t[i];
                    mp2[t[i]] = s[i];
                }
                else return 0;
            }
            else {
                if(mp[s[i]] != t[i]) return 0;
            }
        }
        return 1;
    }
};
