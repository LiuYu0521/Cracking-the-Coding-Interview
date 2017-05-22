class Same {
public:
    bool checkSam(string stringA, string stringB) {
        // write code here
        if(stringA.length()!=stringB.length())
        {
        	return false;
		}
		sort(stringA.begin(),stringA.end());
		sort(stringB.begin(),stringB.end());
		return stringA==stringB;
    }
};

class Same {
public:
    bool checkSam(string stringA, string stringB) {
        // write code here
        if(stringA.length()!=stringB.length())
        {
        	return false;
		}
		int letters[256];
		for(int i=0;i<256;i++)
		{
			letters[i]=0;
		}
		for(int i=0;i<stringA.length();i++)
		{
			letters[int(stringA[i])]++;
		}
		for(int j=0;j<stringB.length();j++)
		{
			if(--letters[int(stringB[j])]<0)
			{
				return false;
			}
		}
		return true;
    }
};
