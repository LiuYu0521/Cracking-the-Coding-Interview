class Ants {
public:
    double antsCollision(int n) {
        // write code here
        double res = 1.0;
        for(int i = 0; i < n - 1; i++)
        {
            res = res * 0.5;
        }
        return 1.0 - res;
    }
};
