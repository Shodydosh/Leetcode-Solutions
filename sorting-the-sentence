class Solution {
public:
    string sortSentence(string s) {
        string word = "";
        vector<string> sortedWord(10);
        
        for(int i=0; i<s.size(); i++){
            if(!isdigit(s[i])){
                word += s[i];
            }
            else{
                word += ' ';
                sortedWord[s[i] - '0' - 1] = word;
                word = "";
                i++;
            }
        }
        
        word = "";
        for(int i=0; i<sortedWord.size(); i++) word += sortedWord[i];
        word.pop_back();
        return word;
    }
};
