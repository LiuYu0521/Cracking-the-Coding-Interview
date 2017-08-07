/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};*/

/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/
class TreeLevel {
public:
    ListNode* getTreeLevel(TreeNode* root, int dep) {
        // write code here
        vector<TreeNode* > out;
        int count = 1;
        helper(root, out, count, dep);
        ListNode* dummy = new ListNode(0);
        ListNode* node = dummy;
        for(int i = 0; i < (int)out.size(); i++)
        {
            node->next  = new ListNode(out[i]->val);
            node = node->next;
        }
        return dummy->next;
    }
    void helper(TreeNode* root, vector<TreeNode*> &out, int count, int dep)
    {
        if(!root)
            return;
        if(count > dep)
            return;
        else if(count < dep)
        {
            if(root->left)
                helper(root->left, out, count + 1, dep);
            if(root->right)
                helper(root->right, out, count + 1, dep);
        }
        else
        {
            out.push_back(root);
        }
    }
};
