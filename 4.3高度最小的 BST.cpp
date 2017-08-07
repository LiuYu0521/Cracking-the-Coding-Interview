class MinimalBST {
public:
    int buildMinimalBST(vector<int> vals) {
        // write code here
        return (int)log2(vals.size()) + 1;
    }
};
//如果要具体操作的话，用递归分别把左右两个子数组的中间值插入到儿子节点上
