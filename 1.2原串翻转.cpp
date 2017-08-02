class Reverse {
public:
    string reverseString(string iniString) {
        // write code here
        int i = 0, j = iniString.length() - 1;
        while(i < j)
        {
            swap(iniString[i], iniString[j]);
            i++;
            j--;
        }
        return iniString;
    }
};
