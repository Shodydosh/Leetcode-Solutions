class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int i=0, j=0;
        while(i < word1.size() && j < word2.size()){
            ans += word1[i++];
            ans += word2[j++];
        }
        if(word1.size() > word2.size()){
            for(int k = i; k<word1.size(); k++) ans+=word1[k];
        }
        else{
            for(int k = j; k<word2.size(); k++) ans+=word2[k];
        }

        return ans;
    }
};
