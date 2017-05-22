class Robot {
public:
    int countWays(int x, int y) {
        // write code here
        int dist[12][12];
        for(int i=0;i<x;i++)
        {
        	dist[i][0]=1;
		}
		for(int j=0;j<y;j++)
		{
			dist[0][j]=1;
		}
		for(int i=1;i<x;i++)
		{
			for(int j=1;j<y;j++)
			{
				dist[i][j]=dist[i-1][j]+dist[i][j-1];
			}
		}
		return dist[x-1][y-1];
    }
};
