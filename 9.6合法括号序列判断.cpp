class Parenthesis {
public:
    bool chkParenthesis(string A, int n) {
        // write code here
        stack<char> s;
        for(int i = 0; i < n; i++)
        {
            if(A[i] != '(' && A[i] != ')')
                return false;
            if(A[i] == '(')
                s.push(A[i]);
            else
            {
                if(s.empty())
                    return false;
                else
                    s.pop();
            }
        }
        return s.empty();
    }
};
