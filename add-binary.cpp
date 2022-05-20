class Solution {
public:
    string addBinary(string a, string b) {
        
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        
        while(a.length() < b.length()) a += '0';
        while(b.length() < a.length()) b += '0';
        
        string ans = "";
        int carry = 0;
        int i=0;
        while(i < a.length()){
            int sum = a[i] + b[i] + carry - '0';
            carry = 0;
            
            if(sum > '1'){
                sum -= '0';
                if(sum == 2){
                    sum = '0';
                }
                else{
                    sum = '1';
                }
                carry = 1;
            } 
            ans.push_back(sum);
            i++;
        }
        if(carry == 1){
            ans.push_back('1');
            carry = 1;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
