class Replacement {
public:
    string replaceSpace(string iniString, int length) {
        // write code here
        for(int i=length-1;i>=0;i--)
        {
        	if(iniString[i]==' ')
        	{
        		iniString.erase(iniString.begin()+i);
        		iniString.insert(i,"%20");
			}
		}
		return iniString;
    }
};
