class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> v(128);
        for(int i=0; i<s.size(); i++) v[s[i]]++;
        for(int i=0; i<s.size(); i++){
            if(v[s[i]] == 1) return i;
        }
        return -1;
    }
};
