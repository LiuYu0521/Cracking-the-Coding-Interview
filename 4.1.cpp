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
    int getHeight(TreeNode* root)
    {
        if(root == nullptr)
        {
            return 0;
        }
        else
        {
            return max(getHeight(root->left), getHeight(root->right)) + 1;
        }
    }
    bool isBalance(TreeNode* root) {
        // write code here
        if(root == nullptr) return true;
        int heightdiff = getHeight(root->left) - getHeight(root->right);
        if(abs(heightdiff) > 1)
            return false;
        else
            return isBalance(root->left) && isBalance(root->right);
    }
};
