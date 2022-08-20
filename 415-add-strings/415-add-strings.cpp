class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans;
        int mark = 0;
        
        while(num2.length() < num1.length()) num2 = '0'+num2;
        while(num1.length() < num2.length()) num1 = '0'+num1;
        
        for(int i=num1.length()-1; i>=0; i--){
            int tmp = 0;
            tmp = num1[i] + num2[i] - '0' - '0';
            if(mark == 1){
                tmp++; mark--;  
            } 
            if(tmp >= 10){
                tmp = tmp%10 + '0';
                mark = 1;
            }
            else{
                tmp += '0';
            }
            
            ans.push_back(tmp);
        }
        
        if(mark == 1) ans.push_back('1');
        reverse(ans.begin(), ans.end());
        return ans;
    }
};