/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};*/
class Solution {
public:
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
        vector<vector<int>> res;
        vector<int> out;
        if(!root)
            return res;
        helper(root, res, out, expectNumber);
        return res;
    }
    void helper(TreeNode* root, vector<vector<int>> &res, vector<int> out, int expectNumber)
    {
        if(!root)
            return;
        out.push_back(root->val);
        expectNumber = expectNumber - root->val;
        if(expectNumber == 0)
        {
            if(!root->left && !root->right)
            {
                res.push_back(out);
                return;
            }
        }
        else if(expectNumber < 0)
            return;
        else if(expectNumber > 0)
        {
            if(root->left)
                helper(root->left, res, out, expectNumber);
            if(root->right)
                helper(root->right, res, out, expectNumber);
        }
        return;
    }
};
