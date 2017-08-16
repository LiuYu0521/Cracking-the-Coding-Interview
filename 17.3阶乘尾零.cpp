class Factor {
public:
    int getFactorSuffixZero(int n) {
        // write code here
        int count = 0;
        for(int i = 1; i <= n; i++)
        {
            int num = i;
            while(num % 5 == 0)
            {
                num = num / 5;
                count++;
            }
        }
        return count;
    }
};
