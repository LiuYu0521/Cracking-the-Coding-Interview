class Transform {
public:
    vector<vector<int> > transformImage(vector<vector<int> > mat, int n) {
        // write code here
        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                swap(mat[i][j], mat[j][i]);
            }
        }
        for(int i = 0; i < n; i++)
        {
            reverse(mat[i].begin(), mat[i].end());
        }
        return mat;
    }
};
