class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int len1 = s1.size();
        sort(s1.begin(), s1.end());

        if(s2.size() < len1) return 0;

        for(int i=0; i<=s2.size()-len1; i++){
            string tmpStr = s2.substr(i, len1);
            sort(tmpStr.begin(), tmpStr.end());
            if(tmpStr == s1) return 1;
        }

        return 0;
    }
};
