class GoUpstairs {
public:
    int countWays(int n) {
        // write code here
        int array[100000];
        array[0]=1;array[1]=2;array[2]=4;
        for(int i=3;i<n;i++)
        {
        	array[i]=(array[i-3]+(array[i-2]+array[i-1])%1000000007)%1000000007;
		}
        return array[n-1];
    }
};
