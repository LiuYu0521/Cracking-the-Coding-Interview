class Replacement {
public:
    string replaceSpace(string iniString, int length) {
        // write code here
        int count_Space = 0;
        for(int i = 0; i < length; i++)
        {
            if(iniString[i] == ' ')
                count_Space++;
        }
        int new_length = length + 2 * count_Space;
        int j = new_length - 1, i = length - 1;
        for(int i = 0; i < 2 * count_Space; i++)
        {
            iniString.push_back(' ');
        }
        while(i >= 0)
        {
            if(iniString[i] != ' ')
            {
                iniString[j] = iniString[i];
                j--;
            }
            else
            {
                iniString[j] = '0';
                iniString[j - 1] = '2';
                iniString[j - 2] = '%';
                j = j - 3;
            }
            i--;
        }
        return iniString;
    }
};
