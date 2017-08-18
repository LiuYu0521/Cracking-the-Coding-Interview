class Subset {
public:
    vector<vector<int> > getSubsets(vector<int> A, int n) {
        // write code here
        sort(A.begin(), A.end());
        int size = 1 << n;
        vector<vector<int> >subsets;
        for (int i = size - 1; i > 0; --i) {
            vector<int> subset;
            for (int j = n - 1; j >= 0; --j) {
                if ((i >> j) & 1) {
                    subset.push_back(A[j]);
                }
            }
            subsets.push_back(subset);
        }
        return subsets;
    }
};
