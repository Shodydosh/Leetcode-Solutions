class Solution {
public:
    bool isSubsequence(string s, string t) {
        int mark = 0;
        for(int i=0; i<s.size(); i++){
            // cout << "i=" << i << endl;
            int check = 1;
            if(t.size()-1-mark < s.size()-1-i){
                // cout << mark << endl;
                return false;
            } 
            
            for(int j=mark; j<t.size(); j++){
                if(s[i] == t[j]){
                    mark = j+1;
                    check = 0;
                    // cout << mark;
                    break;
                }
            }
            if(check) return false;
        }
        
        return true;
    }
};