class BinInsert {
public:
    int binInsert(int n, int m, int j, int i) {
        // write code here
        m = m << j;
        return n | m;
    }
};
