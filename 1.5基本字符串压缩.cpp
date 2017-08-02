class Zipper {
public:
    string zipString(string iniString) {
        // write code here
        string zip = "";
        int len = iniString.length();
        for(int i = 0; i < len - 1; i++)
        {
            int count = 1;
            while(iniString[i] == iniString[i + 1])
            {
                count++;
                i++;
            }
            zip.push_back(iniString[i]);
            zip = zip + to_string(count);
        }
        if(zip.length() < iniString.length())
            return zip;
        else
            return iniString;
    }
};
