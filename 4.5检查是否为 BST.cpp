/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};*/

class Checker {
public:
    bool checkBST(TreeNode* root) {
        // write code here
        int min = INT_MIN;
        int max = INT_MAX;
        return helper(root, min, max);
    }
    bool helper(TreeNode* root, int min, int max)
    {
        if(!root)
            return true;
        if(root->val < min || root->val >= max)
            return false;
        if(!helper(root->left, min, root->val) || !helper(root->right, root->val, max))
            return false;
        return true;
    }
};
