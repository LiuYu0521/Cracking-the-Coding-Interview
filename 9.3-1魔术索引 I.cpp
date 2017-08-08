class MagicIndex {
public:
    bool findMagicIndex(vector<int> A, int n) {
        // write code here
        return helper(A, 0, n - 1);
    }
    bool helper(vector<int> &A, int start, int end)
    {
        if(end < start || start < 0 || end >= A.size())
            return false;
        int mid = (start + end) / 2;
        if(A[mid] == mid)
            return true;
        else if(A[mid] > mid)
            return helper(A, start, mid - 1);
        else
            return helper(A, mid + 1, end);
    }
};
