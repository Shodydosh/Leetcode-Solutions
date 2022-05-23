class Solution {
public:
    int matches = 0;
    int numberOfMatches(int n) {
        if(n == 1) return matches;
        matches += n/2;
        if(n%2 == 1){
            return numberOfMatches(n/2+1);
        }
        else{
            return numberOfMatches(n/2);
        }
    }
};
