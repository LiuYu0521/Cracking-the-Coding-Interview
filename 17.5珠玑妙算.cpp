class Result {
public:
    vector<int> calcResult(string A, string guess) {
        // write code here
        vector<int> res(2, 0);
        vector<int> count1(4, 0);
        vector<int> count2(4, 0);
        int n = A.length();
        for(int i = 0; i < n; i++)
        {
            if(A[i] == guess[i])
                res[0]++;
        }
        for(int i = 0; i < n; i++)
        {
            if(A[i] == 'B')
                count1[0]++;
            else if(A[i] == 'G')
                count1[1]++;
            else if(A[i] == 'R')
                count1[2]++;
            else
                count1[3]++;
            if(guess[i] == 'B')
                count2[0]++;
            else if(guess[i] == 'G')
                count2[1]++;
            else if(guess[i] == 'R')
                count2[2]++;
            else
                count2[3]++;
        }
        for(int i = 0; i < 4; i++)
        {
            res[1] = res[1] + min(count1[i], count2[i]);
        }
        res[1] = res[1] - res[0];
        return res;
    }
};
