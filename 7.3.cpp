class CrossLine {
public:
    bool checkCrossLine(double s1, double s2, double y1, double y2) {
        // write code here
        const double epsilon = 0.000001;
        return abs(s1 - s2) > epsilon || abs(y1 - y2) < epsilon;
    }
};
