class Joseph {
public:
    int getResult(int n, int m) {
        // write code here
        if(n <= 0 || m <= 0)
            return -1;
        int s = 0;
        for(int i = 2; i <= n; i++)
        {
            s = (s + m) % i;
        }
        return s + 1;
    }
};
