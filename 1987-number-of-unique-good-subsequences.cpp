class Solution {
public:
    int numberOfUniqueGoodSubsequences(string binary) {
        const int mod = 1e9+7;
        long long dp[2][2] = {};
        // dp[i][j] stands for number of good subsequences 
        // start with i and end with j 

        for(char a : binary){
            if(a == '0'){
                // to check if there are any '0' in the string
                dp[0][0] = 1;

                // good subsequences end with 0
                dp[1][0] = (dp[1][0] + dp[1][1]) % mod;
            }
            else {
                // good subsequences end with 1
                dp[1][1] = (dp[1][0] + dp[1][1] + 1) % mod;
                // +1 because there will be "1" and then add 1 to the end it become "11"
                // so adding back "1"
            }
        }

        return (dp[1][1] + dp[0][0] + dp[1][0]) % mod;
    }
};
