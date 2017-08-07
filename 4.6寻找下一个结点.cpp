/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};*/

class Successor {
public:
    int findSucc(TreeNode* root, int p) {
        // write code here
        bool flag = false;
        return find(root, p, flag);
    }
    int find(TreeNode* root, int p, bool &flag)
    {
        if(!root)
            return -1;
        int left = find(root->left, p, flag);
        if(left != -1)
            return left;
        if(flag)
            return root->val;
        if(root->val == p)
            flag = true;
        return find(root->right, p, flag);
    }
};
