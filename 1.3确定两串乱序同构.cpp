class Same {
public:
    bool checkSam(string stringA, string stringB) {
        // write code here
        int lenA = stringA.length();
        int lenB = stringB.length();
        if(lenA != lenB)
            return false;
        int letter[256] = {0};
        for(int i = 0; i < lenA; i++)
        {
            letter[stringA[i]]++;
        }
        for(int i = 0; i < lenB; i++)
        {
            letter[stringB[i]]--;
            if(letter[stringB[i]] < 0)
                return false;
        }
        return true;
    }
};
