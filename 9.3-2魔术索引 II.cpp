class MagicIndex {
public:
    bool findMagicIndex(vector<int> A, int n) {
        // write code here
        return helper(A, 0, n - 1);
    }
    bool helper(vector<int> &A, int start, int end)
    {
        if(start > end || start < 0 || end >= A.size())
            return false;
        int mid = (start + end) / 2;
        int midValue = A[mid];
        if(midValue == mid)
            return true;
        int leftIndex = min(mid - 1, midValue);
        int rightIndex = max(mid + 1, midValue);
        return helper(A, start, leftIndex) || helper(A, rightIndex, end);
    }
};
