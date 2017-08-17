class Count2 {
public:
    int countNumberOf2s(int n) {
        // write code here
        int count = 0;
        for(int i = 2; i <= n; i++)
        {
            count = count + helper(i);
        }
        return count;
    }
    int helper(int num)
    {
        int count = 0;
        while(num)
        {
            if(num % 10 == 2)
            {
                count++;
            }
            num = num / 10;
        }
        return count;
    }
};
