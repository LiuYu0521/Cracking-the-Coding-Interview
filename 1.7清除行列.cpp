class Clearer {
public:
    vector<vector<int> > clearZero(vector<vector<int> > mat, int n) {
        // write code here
        bool row[n];
        bool col[n];
        for(int i = 0; i < n; i++)
        {
            row[i] = false;
            col[i] = false;
        }
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(mat[i][j] == 0)
                {
                    row[i] = true;
                    col[j] = true;
                }
            }
        }
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(row[i] || col[j])
                    mat[i][j] = 0;
            }
        }
        return mat;
    }
};
