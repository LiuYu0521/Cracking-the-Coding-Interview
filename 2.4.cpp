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
        ListNode* beforeStart = nullptr;
        ListNode* beforeEnd = nullptr;
        ListNode* afterStart = nullptr;
        ListNode* afterEnd = nullptr;
        while(pHead != nullptr)
        {
            ListNode* next = pHead->next;
            if(pHead->val < x)
            {
                if(beforeStart == nullptr)
                {
                    beforeStart = pHead;
                    beforeEnd = beforeStart;
                }
                else
                {
                    beforeEnd->next = pHead;
                    beforeEnd = pHead;
                }
            }
            else
            {
                if(afterStart == nullptr)
                {
                    afterStart = pHead;
                    afterEnd = afterStart;
                }
                else
                {
                    afterEnd->next = pHead;
                    afterEnd = pHead;
                }
            }
            pHead = next;
        }
        if(afterEnd)
            afterEnd->next = nullptr;
        if(beforeEnd != nullptr)
            beforeEnd->next = afterStart;
        else
            beforeStart = afterStart;
        return beforeStart;
    }
};
