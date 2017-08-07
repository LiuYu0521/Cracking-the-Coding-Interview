class BinDecimal {
public:
    string printBin(double num) {
        // write code here
        if(num >= 1 || num <= 0)
            return "Error";
        string res = "";
        res = res + "0.";
        double base = 0.5;
        while(num > 0)
        {
            if(num >= base)
            {
                num = num - base;
                res = res + "1";
            }
            else
                res = res + "0";
            base = base / 2;
            if(res.size() > 32)
            {
                return "Error";
            }
        }
        return res;
    }
};
