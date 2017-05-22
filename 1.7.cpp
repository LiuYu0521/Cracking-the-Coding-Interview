class Clearer {
public:
    vector<vector<int> > clearZero(vector<vector<int> > mat, int n) {
        // write code here
        bool row[n];
        bool column[n];
        for(int i=0;i<n;i++)
        {
        	row[i]=false;
        	column[i]=false;
		}
        for(int i=0;i<n;i++)
        {
        	for(int j=0;j<n;j++)
        	{
        		if(mat[i][j]==0)
        		{
        			row[i]=true;
        			column[j]=true;
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(row[i]||column[j])
				{
					mat[i][j]=0;
				}
			}
		}
        return mat;
    }
};
