class Coins {
public:
    int countWays(int n) {
        // write code here
        int coins[4] = {1, 5, 10, 25};
        int dp[4][n + 1];
        for(int i = 0; i < n + 1; i++)
        {
            dp[0][i] = 1;
        }
        for(int i = 1; i < 4; i++)
        {
            for(int j = 0; j < n + 1; j++)
            {
                if(j < coins[i])
                    dp[i][j] = dp[i - 1][j];
                else
                {
                    dp[i][j] = (dp[i - 1][j] + dp[i][j - coins[i]]) % 1000000007;
                }
            }
        }
        return dp[3][n];
    }
};
