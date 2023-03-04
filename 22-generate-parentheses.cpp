class Solution {
public:
    bool check(string s){
        stack<char> st;
        for(auto x : s){
            if(x == '(') st.push(x);
            else {
                if(st.empty()) return false;
                else st.pop();
            }
        }
        if(!st.empty()) return false;
        return true;
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        for(int i=0; i<pow(2, n*2); i++){
            string s = bitset<20>(i).to_string();
            s = s.substr(20-2*n, 2*n);
            string tmp = "";
            for(auto x : s){
                (x == '1') ? tmp += '(' : tmp += ')';
            }
            if(check(tmp))ans.push_back(tmp);
        }
        return ans;
    }
};
