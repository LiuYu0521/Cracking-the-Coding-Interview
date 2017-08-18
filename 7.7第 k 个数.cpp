class KthNumber {
public:
    int findKth(int k) {
        // write code here
        int res[k];
        int index_3 = 0, index_5 = 0, index_7 = 0;
        res[0] = 3;
        res[1] = 5;
        res[2] = 7;
        for(int i = 3; i < k; i++)
        {
            res[i] = min(min(res[index_3] * 3, res[index_5] * 5), res[index_7] * 7);
            if(res[i] == res[index_3] * 3)
                index_3++;
            if(res[i] == res[index_5] * 5)
                index_5++;
            if(res[i] == res[index_7] * 7)
                index_7++;
        }
        return res[k - 1];
    }
};
