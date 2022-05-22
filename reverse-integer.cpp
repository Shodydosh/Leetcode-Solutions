class Solution {
public:
    int reverse(int x) {
        string str = to_string(x);
        if(str[0] == '-'){
            ::reverse(str.begin()+1, str.end());
        }
        else{
            ::reverse(str.begin(), str.end());
        }
        
        if(stol(str) > INT_MAX || stol(str) < INT_MIN) return 0;
        else return stoi(str);
    }
};
