class Max {
public:
    int getMax(int a, int b) {
        // write code here
        b = a - b;
        a -= b & (b >> 31);
        return a;
    }
};
