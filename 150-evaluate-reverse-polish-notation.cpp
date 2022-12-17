class Solution {
public:
    long long evalRPN(vector<string>& tokens) {
        string s = tokens.back();
        tokens.pop_back();
        if(s != "+" && s != "-" && s != "*" && s != "/") return stoi(s);
        else {
            long long a = evalRPN(tokens);
            long long b = evalRPN(tokens);

            if(s == "+") return a + b;
            else if (s == "-") return b - a;
            else if (s == "/") return b / a;
            else return a * b;
        }
    }
};
