class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int a=0, b=0;
        for(int i=0; i<s1.length(); i++){
            if(s1[i] != s2[i]){
                if(!a) a = i;
                else if(!b) b = i;
            } 
        }
        swap(s1[a], s1[b]);
        return s1 == s2;
    }
};
