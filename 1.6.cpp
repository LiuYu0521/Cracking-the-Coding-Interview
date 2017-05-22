class Transform {
public:
    vector<vector<int> > transformImage(vector<vector<int> > mat, int n) {
        // write code here
        for(int layer = 0; layer < n/2; layer++)
        {
        	int first = layer;
        	int last = n - 1 - layer;
        	for(int i = first; i < last; i++)
        	{
        		int offset = i - first;
        		int top = mat[first][i];
        		mat[first][i] = mat[last - offset][first];
        		mat[last - offset][first] = mat[last][last - offset];
        		mat[last][last - offset] = mat[i][last];
        		mat[i][last] = top;
			}
		}
		return mat;
    }
};
