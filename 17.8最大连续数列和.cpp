class MaxSum {
public:
    int getMaxSum(vector<int> A, int n) {
        // write code here
        int maxSum = INT_MIN;
        int thisSum = 0;
        for(int i = 0; i < n; i++)
        {
            thisSum = thisSum + A[i];
            if(thisSum > maxSum)
                maxSum = thisSum;
            if(thisSum < 0)
                thisSum = 0;
        }
        return maxSum;
    }
};
