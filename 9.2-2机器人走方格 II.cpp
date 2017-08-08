class Robot {
public:
    int countWays(vector<vector<int> > map, int x, int y) {
        // write code here
        int dp[x][y];
        for(int i = 0; i < x; i++)
        {
            for(int j = 0; j < y; j++)
            {
                if(map[i][j] != 1)
                    dp[i][j] = 0;
                else
                    dp[i][j] = -1;
            }
        }
        for(int i = 0; i < x; i++)
            dp[i][0] = 1;
        for(int j = 0; j < y; j++)
            dp[0][j] = 1;
        int index_x = 0, index_y = 0;
        while(index_x < x && map[index_x][0] == 1)
            index_x++;
        while(index_y < y && map[0][index_y] == 1)
            index_y++;
        for(int i = index_x; i < x; i++)
            dp[i][0] = 0;
        for(int j = index_y; j < y; j++)
            dp[0][j] = 0;
        for(int i = 1; i < x; i++)
        {
            for(int j = 1; j < y; j++)
            {
                if(dp[i][j] == -1)
                    dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
        return dp[x - 1][y - 1];
    }
};
