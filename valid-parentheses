class Solution {
public:
    bool isValid(string s) {
        stack<char> par;
        if(s.length() % 2 == 1) return false;
        for(auto a : s){
            if(a == '{' || a == '[' || a == '(') par.push(a);
            else if(par.empty()) return 0;
            else{
                switch(a){
                    case '}':
                        if(par.top() == '{') par.pop();
                        else return 0;
                        break;
                    case ']':
                        if(par.top() == '[') par.pop();
                        else return 0;
                        break;
                    default:
                        if(par.top() == '(') par.pop();
                        else return 0;
                }
            }
        }
        
        if(par.empty()) return 1;
        return 0;
        
    }
};
