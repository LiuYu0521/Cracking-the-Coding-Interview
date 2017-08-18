class Box {
    struct box{
        int width, length, height;
        box(int w, int l, int h) :width(w), length(l), height(h){}
    };
public:
    int getHeight(vector<int> width, vector<int> length, vector<int> height, int n)
    {
        vector<box> boxes;
        boxes.reserve(n);
        for (int i = 0; i < n; ++i)  boxes.emplace_back(width[i], length[i], height[i]);
        sort(boxes.begin(), boxes.end(),
            [](const box& b1, const box& b2)
            {
                return b1.width < b2.width || b1.width == b2.width && b1.length < b2.length;
            });
        vector<int> dp(n);
        int maxHeight = 0;
        for (int i = 0; i < n; ++i)
        {
            dp[i] = boxes[i].height;
            for (int j = i - 1; j >= 0; --j)
            {
                if (boxes[j].width < boxes[i].width && boxes[j].length < boxes[i].length)
                    dp[i] = max(dp[i], dp[j] + boxes[i].height);
            }
            maxHeight = max(maxHeight, dp[i]);
        }
 
        return maxHeight;
    }
};
