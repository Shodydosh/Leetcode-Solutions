class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string longest = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            for (int j = 0; j < longest.length(); j++) {
                if (strs[i][j] != longest[j]) {
                    longest = longest.substr(0, j);
                    break;
                }
            }
        }
        return longest;
    }
};