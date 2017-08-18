/*
struct Point {
    int x;
    int y;
    Point() :
            x(0), y(0) {
    }
    Point(int xx, int yy) {
        x = xx;
        y = yy;
    }
};*/
class Bipartition {
public:
    vector<double> getBipartition(vector<Point> A, vector<Point> B) {
        // write code here
        vector<double> res(2, 0);
        double x1 = (A[0].x + A[1].x + A[2].x + A[3].x) / 4;
        double y1 = (A[0].y + A[1].y + A[2].y + A[3].y) / 4;
        double x2 = (B[0].x + B[1].x + B[2].x + B[3].x) / 4;
        double y2 = (B[0].y + B[1].y + B[2].y + B[3].y) / 4;
        res[0] = (y2 - y1) / (x2 - x1);
        res[1] = y1 - res[0] * x1;
        return res;
    }
};
