class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(!num) return true;
        string a = to_string(num);
        if(a[a.length()-1] == '0') return false;
        return true;
    }
};
