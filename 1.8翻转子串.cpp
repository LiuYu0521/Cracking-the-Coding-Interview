class ReverseEqual {
public:
    bool checkReverseEqual(string s1, string s2) {
        // write code here
        if(s1.length() != s2.length())
            return false;
        string s1s1 = s1 + s1;
        if(s1s1.find(s2) != string::npos)
            return true;
        return false;
    }
};
