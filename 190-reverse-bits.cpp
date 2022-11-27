class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        uint32_t ans = 0, count = 32;
        while (count--)
        {
            ans += n & 1;
            n >>= 1;
            if (count)
                ans <<= 1;
        }
        return ans;
    }
};
