class Solution {
public:
    string orderlyQueue(string s, int k) {
        if(k>1){
            sort(s.begin(), s.end());
            return s;
        }
        else{
            int len = s.size();
            s = s + s;
            int index = 0;
            for(int i=0; i<len; i++){
                if(s.substr(index, len) > s.substr(i, len)) index = i;
            }
            return s.substr(index, len);
        }
    }
};
