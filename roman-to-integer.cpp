class Solution {
public:
    int romanToInt(string s) {
        s = '1' + s;
        int res = 0;
		int check = 0;
		for(int i=s.length()-1; i>=0; i--){

			if(s[i] == 'I' && check == 1){
				res -= 1;
				if(s[i-1] != 'I') check = 0;
				continue;		
			}
			if(s[i] == 'X' && check == 1){
				res -= 10;
				if(s[i-1] != 'X') check = 0;
				continue;		
			}
			if(s[i] == 'C' && check == 1){
				res -= 100;
				if(s[i-1] != 'C') check = 0;
				continue;		
			}

			if(s[i] == 'V' && s[i-1] != 'I'){
				res += 5;
				check = 0;
				continue;
			}
			if(s[i] == 'X' && s[i-1] != 'I'){
				res += 10;
				check = 0;
				continue;
			}
		
			if(s[i] == 'V' && s[i-1] == 'I'){
				res += 5;
				check = 1;
				continue;
			}
			if(s[i] == 'X' && s[i-1] == 'I'){
				res += 10;
				check = 1;
				continue;
			}
			/////////////////////////////////
			if(s[i] == 'L' && s[i-1] != 'X'){
				res += 50;
				check = 0;
				continue;
			}
			if(s[i] == 'C' && s[i-1] != 'X'){
				res += 100;
				check = 0;
				continue;
			}
		
			if(s[i] == 'L' && s[i-1] == 'X'){
				res += 50;
				check = 1;
				continue;
			}
			if(s[i] == 'C' && s[i-1] == 'X'){
				res += 100;
				check = 1;
				continue;
			}
			/////////////////////////////////
			if(s[i] == 'D' && s[i-1] != 'C'){
				res += 500;
				check = 0;
				continue;
			}
			if(s[i] == 'M' && s[i-1] != 'C'){
				res += 1000;
				check = 0;
				continue;
			}
		
			if(s[i] == 'D' && s[i-1] == 'C'){
				res += 500;
				check = 1;
				continue;
			}
			if(s[i] == 'M' && s[i-1] == 'C'){
				res += 1000;
				check = 1;
				continue;
			}

			/////////////////////////////////

			if(s[i] == 'I' && check != 1){
				res += 1; continue;
			}
			if(s[i] == 'X' && check != 1){
				res += 10; continue;
			}
			if(s[i] == 'C' && check != 1){
				res += 100; continue;
			}
			if(s[i] == 'M' && check != 1){
				res += 1000; continue;
			}
		}
        return res;
    }
};
