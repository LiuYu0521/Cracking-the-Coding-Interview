class AddSubstitution {
public:
    int calc(int a, int b, int type) {
        // write code here
        int res = 0;
        if(type == 1)
        {
            for(int i = 0; i < b; i++)
                res = res + a;
        }
        else if(type == -1)
        {
            res = a + (~b) + 1;
        }
        else
        {
            int temp = a;
            while(temp > 0 && temp >= b)
            {
                temp = temp +(~b) + 1;
                res++;
            }
        }
        return res;
    }
};
