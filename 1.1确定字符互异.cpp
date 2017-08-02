class Different {
public:
    bool checkDifferent(string iniString) {
        // write code here
        int len = iniString.length();
        for(int i = 0; i < len - 1; i++)
        {
            for(int j = i + 1; j < len; j++)
            {
                if(iniString[i] == iniString[j])
                    return false;
            }
        }
        return true;
    }
};

class Different {
public:
    bool checkDifferent(string iniString) {
        // write code here
        int len = iniString.length();
        if(len > 256)
            return false;
        bool letter[256] = {false};
        for(int i = 0; i < len; i++)
        {
            if(letter[iniString[i]])
                return false;
            letter[iniString[i]] = true;
        }
        return true;
    }
};
