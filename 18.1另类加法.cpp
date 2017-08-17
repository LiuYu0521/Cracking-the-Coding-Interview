class UnusualAdd {
public:
    int addAB(int A, int B) {
        // write code here
        if(B == 0)
            return A;
        int sum = A ^ B;
        int carry = (A & B) << 1;
        return addAB(sum, carry);
    }
};
