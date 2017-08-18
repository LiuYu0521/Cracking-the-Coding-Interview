class Queens {
public:
    int nQueens(int n) {
        // write code here
        vector<int> pos(n, -1);
        int count = 0;
        helper(0, pos, count);
        return count;
    }
    void helper(int row, vector<int> &pos, int &count)
    {
        int n = pos.size();
        if(row == n)
        {
            count++;
            return;
        }
        else
        {
            for(int col = 0; col < n; col++)
            {
                if(isValid(row, col, pos))
                {
                    pos[row] = col;
                    helper(row + 1, pos, count);
                    pos[row] = -1;
                }
            }
        }
    }
    bool isValid(int row, int col, vector<int> &pos)
    {
        for(int i = 0; i < row; i++)
        {
            if(pos[i] == col || abs(row - i) == abs(col - pos[i]))
                return false;
        }
        return true;
    }
};
