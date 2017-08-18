class Flood {
public:
    int floodFill(vector<vector<int>> map, int n, int m) {
        if(n == 0 || m == 0 || map[0][0])
            return 0;
        int direction[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};
        queue<int> que;
        int point;
        que.push(0);
        while(!que.empty()){
            point = que.front();
            que.pop();
            int y = point / m;
            int x = point % m;
            if(y == n - 1 && x == m - 1)
                return map[y][x];
            for(int i = 0;i < 4;i++){
                int next_y = y + direction[i][0];
                int next_x = x + direction[i][1];
                if(next_y >= 0 && next_x >= 0 && next_y < n && next_x < m && map[next_y][next_x] == 0){
                    que.push(next_y * m + next_x);
                    map[next_y][next_x] = map[y][x] + 1;
                }
            }
        }
        return 0;
    }
};
