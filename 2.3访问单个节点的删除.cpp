/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/
class Remove {
public:
    bool removeNode(ListNode* pNode) {
        // write code here
        if(!pNode->next)
            return false;
        ListNode* temp = pNode->next;
        pNode->val = temp->val;
        pNode->next = temp->next;
        delete(temp);
        return true;
    }
};
