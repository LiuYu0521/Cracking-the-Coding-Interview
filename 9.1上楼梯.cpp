class GoUpstairs {
public:
    int countWays(int n) {
        // write code here
        if(n == 1)
            return 1;
        if(n == 2)
            return 2;
        if(n == 3)
            return 4;
        int a = 1, b = 2, c = 4;
        int res = 0;
        for(int i = 3; i < n; i++)
        {
            res = ((a + b) % 1000000007 + c) % 1000000007;
            a = b;
            b = c;
            c = res;
        }
        return res;
    }
};
