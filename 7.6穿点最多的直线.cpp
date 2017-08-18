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
class DenseLine {
public:
    vector<double> getLine(vector<Point> p, int n) {
        map<pair<double, double>, int > lines;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                ++lines[calLine(p[i],p[j])];
            }
        }
        auto it = lines.begin();
        auto maxLine = it;
        int max = 0;
        while(it != lines.end()){
            if(it->second > max) maxLine = it;
            it++;
        }
        vector<double> res;
        res.push_back(maxLine->first.first);
        res.push_back(maxLine->first.second);
        return res;
    }
 
   //计算斜率
    pair<double, double> calLine(Point p1,Point p2){
        double k = (double)(p1.y - p2.y)/(double)(p1.x - p2.x);
        double s = (double)p1.y - (double)k*p1.x;
        return make_pair(k,s);
    }
};
