class Solution {
public:
    static bool cmp(int a, int b){
        int aBit = __builtin_popcount(a);
        int bBit = __builtin_popcount(b);
        return aBit == bBit ? a < b : aBit < bBit;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), cmp);
        return arr;
    }
};
