class Zipper {
public:
    string zipString(string iniString) {
        // write code here
        string str;
        char ch = iniString[0];
        int count = 1;
        for (int i = 1; i < iniString.length(); i++){
            if (iniString[i] == ch){
                count++;
            }
            else{
                str.push_back(ch);
                str += to_string(count);
                count = 1;
                ch = iniString[i];
            }
        }
        str.push_back(ch);
        str += to_string(count);
        return str.length() < iniString.length() ? str : iniString;
        }
};
