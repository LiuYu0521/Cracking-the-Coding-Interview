class Reverse {
public:
    string reverseString(string iniString) {
        // write code here
        for(int i=0,j=iniString.length()-1;i<j;i++,j--)
        {
        	swap(iniString[i],iniString[j]);
		}
		return iniString;
    }
};
