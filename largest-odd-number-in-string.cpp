class Solution {
public:
    
    string largestOddNumber(string num) {
        int index = -1;
        for(int i=num.length()-1; i>=0; i--){
            if(num[i] % 2 == 1){
                index = i;
                break;
            }
        }
        string a = "";
        if(index == -1) return a;
        else return num.substr(0, index+1);
    }
};
