class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n % 2) return n << 1;
        else return n;
    }
};
