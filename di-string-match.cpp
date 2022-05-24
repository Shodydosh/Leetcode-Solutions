class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> ans;
        int large = s.length();
        int small = 0;
        
        for(int i=0; i<=s.length(); i++){
            if(s[i] == 'I') ans.push_back(small++);
            else ans.push_back(large--);
        }
        
        return ans;
    }
};
