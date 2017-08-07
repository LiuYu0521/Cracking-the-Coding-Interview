class TwoStacks {
public:
    vector<int> twoStacksSort(vector<int> numbers) {
        // write code here
        vector<int> res;
        while(!numbers.empty())
        {
            int temp = numbers[0];
            numbers.erase(numbers.begin(), numbers.begin() + 1);
            while(!res.empty() && res[0] > temp)
            {
                numbers.insert(numbers.begin(), res[0]);
                res.erase(res.begin(), res.begin() + 1);
            }
            res.insert(res.begin(), temp);
        }
        return res;
    }
};
