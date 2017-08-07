class Transform {
public:
    int calcCost(int A, int B) {
        // write code here
        int c = A ^ B;
        int count = 0;
        while(c != 0)
        {
            count++;
            c = c & (c - 1);
        }
        return count;
    }
};
