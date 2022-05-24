class Solution {
public:
    bool squareIsWhite(string coordinates) {
        string a = coordinates;
        if(a[0]%2==1 && a[1]%2==1 || a[0]%2==0 && a[1]%2==0){
            return false;
        }
        else{
            return true;
        }
    }
};
