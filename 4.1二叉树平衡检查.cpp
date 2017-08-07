/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};*/

class Balance {
public:
    bool isBalance(TreeNode* root) {
        // write code here
        if(getHeight(root) == -1)
            return false;
        else
            return true;
    }
    int getHeight(TreeNode* root)
    {
        if(!root)
            return 0;
        if(getHeight(root->left) == -1)
            return -1;
        if(getHeight(root->right) == -1)
            return -1;
        if(abs(getHeight(root->left) - getHeight(root->right)) > 1)
            return -1;
        return 1 + max(getHeight(root->left), getHeight(root->right));
    }
};
