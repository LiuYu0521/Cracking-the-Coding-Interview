/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/
class Partition {
public:
    ListNode* partition(ListNode* pHead, int x) {
        // write code here
        ListNode* s_head = new ListNode(-1);
        ListNode* b_head = new ListNode(-1);
        ListNode* s_tail = s_head;
        ListNode* b_tail = b_head;
        while(pHead)
        {
            if(pHead->val < x)
            {
                s_tail->next = pHead;
                s_tail = s_tail->next;
                pHead = pHead->next;
            }
            else
            {
                b_tail->next = pHead;
                b_tail = b_tail->next;
                pHead = pHead->next;
            }
        }
        b_tail->next = nullptr;
        s_tail->next = b_head->next;
        return s_head->next;
    }
};
