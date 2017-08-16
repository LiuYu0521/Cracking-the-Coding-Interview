class Frequency {
public:
    int getFrequency(vector<string> article, int n, string word) {
        // write code here
        int count = 0;
        int len = word.length();
        for(int i = 0; i < n; i++)
        {
            if(article[i].length() != len)
                continue;
            if(article[i] == word)
                count++;
        }
        return count;
    }
};
