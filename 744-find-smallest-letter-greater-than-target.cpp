class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l = 0;
        int r = letters.size()-1;
        char ans = letters[0];
        int mid;
        while(l <= r){
            mid = l + (r-l)/2;
            if(letters[mid] > target){
                ans = letters[mid];
                r = mid-1;
            } 
            else if(letters[mid] <= target) l = mid+1;
        }
        return ans;
    }
};
