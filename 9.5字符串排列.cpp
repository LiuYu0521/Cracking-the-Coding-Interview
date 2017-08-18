class Permutation {
public:
    static bool cmp(const string a, const string b)
    {
        return a > b;
    }
    vector<string> getPermutation(string A) {
        // write code here
        vector<string> res;
        if(A.length() == 0)
            return res;
        helper(0, A, res);
        sort(res.begin(), res.end(), cmp);
        return res;
    }
    void helper(int k, string &A, vector<string> &res)
    {
        int len = A.length();
        if(k == len)
        {
            res.push_back(A);
            return;
        }
        for(int i = k; i < len; i++)
        {
            swap(A[i], A[k]);
            helper(k + 1, A, res);
            swap(A[i], A[k]);
        }
    }
};
