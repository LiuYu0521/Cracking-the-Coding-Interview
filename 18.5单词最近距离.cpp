class Distance {
public:
    int getDistance(vector<string> article, int n, string x, string y) {
        // write code here
        int index_x = -1, index_y = -1;
        int res = INT_MAX;
        for(int i = 0; i < n; i++)
        {
            if(article[i] == x)
                index_x = i;
            else if(article[i] == y)
                index_y = i;
            else
                continue;
            if(index_y != -1 && index_x != -1)
                res = min(res, abs(index_x - index_y));
        }
        return res;
    }
};
