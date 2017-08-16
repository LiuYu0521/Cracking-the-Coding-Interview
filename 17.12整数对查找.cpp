#include <unordered_map>
class FindPair {
public:
    int countPairs(vector<int> A, int n, int sum) {
        // write code here
        int count = 0;
        unordered_map<int, int> m;
        for(int i = 0; i < n; i++)
        {
            count = count + m[sum - A[i]];
            m[A[i]]++;
        }
        return count;
    }
};
