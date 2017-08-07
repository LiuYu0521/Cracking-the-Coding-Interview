class SetOfStacks {
public:
    vector<vector<int> > setOfStacks(vector<vector<int> > ope, int size) {
        // write code here
        vector<vector<int>> res;
        vector<int> last;
        int len = ope.size();
        for(int i = 0; i < len; i++)
        {
            if(ope[i][0] == 1)
            {
                if((int)last.size() != size)
                {
                    last.push_back(ope[i][1]);
                }
                else
                {
                    res.push_back(last);
                    last.clear();
                    last.push_back(ope[i][1]);
                }
            }
            else
            {
                if(!last.empty())
                {
                    last.pop_back();
                }
                else
                {
                    last = res[res.size() - 1];
                    last.pop_back();
                    res.erase(res.begin() + res.size() - 1, res.end());
                }
            }
        }
        res.push_back(last);
        return res;
    }
};
