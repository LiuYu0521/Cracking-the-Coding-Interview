class Different {
public:
    bool checkDifferent(string iniString) {
        // write code here
        for(int i=0;i<iniString.length();i++)
        {
        	for(int j=0;j<iniString.length();j++)
        	{
        		if(i!=j&&iniString[i]==iniString[j])
        		{
        			return false;
				}
			}
		}
		return true;
    }
};
