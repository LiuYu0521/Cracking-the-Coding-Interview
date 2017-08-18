class Render {
public:
    vector<int> renderPixel(vector<int> screen, int x, int y) {
        // write code here
        for(int i = x; i <= y; i++)
        {
            int k = i % 8;
            int t = i / 8;
            screen[t] = screen[t] | (1 << k);
        }
        return screen;
    }
};
