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
class Converter {
public:
    ListNode* dummy;
    ListNode* p;
    void inOrder(TreeNode* root)
    {
        if(!root)
            return;
        inOrder(root->left);
        ListNode* cur = new ListNode(root->val);
        p->next = cur;
        p = p->next;
        inOrder(root->right);
    }
    ListNode* treeToList(TreeNode* root) {
        // write code here
        dummy = new ListNode(0);
        p = dummy;
        inOrder(root);
        return dummy->next;
    }
};
