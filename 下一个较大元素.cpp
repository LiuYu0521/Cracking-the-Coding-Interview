class NextElement {
public:
    vector<int> findNext(vector<int> A, int n) {
        // write code here
        vector<int> res;
        if(n <= 0)
            return res;
        stack<int> s;
        s.push(-1);
        for(int i = n - 1; i >= 0; i--)
        {
            int top = s.top();
            while(top != -1 && A[i] >= top)
            {
                s.pop();
                top = s.top();
            }
            res.insert(res.begin(), top);
            s.push(A[i]);
        }
        return res;
    }
};
