/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
            val(x), next(NULL) {
    }
};*/
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        if(pListHead == nullptr || k ==0)
            return nullptr;
        ListNode* k_node = pListHead;
        for(int i = 0; i < k - 1; i++)
        {
            if(k_node->next)
                k_node = k_node->next;
            else
                return nullptr;
        }
        ListNode* res = pListHead;
        while(k_node->next)
        {
            res = res->next;
            k_node = k_node->next;
        }
        return res;
    }
};
