/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/
class Plus {
public:
    ListNode* plusAB(ListNode* a, ListNode* b) {
        // write code here
        ListNode* dummy = new ListNode(0);
        ListNode* node = dummy;
        int carry = 0;
        while(a || b)
        {
            if(a && b)
            {
                node->next = new ListNode((a->val + b->val + carry) % 10);
                carry = (a->val + b->val + carry) / 10;
                a = a->next;
                b = b->next;
            }
            else if(a && !b)
            {
                node->next = new ListNode((a->val + 0 + carry) % 10);
                carry = (a->val + 0 + carry) / 10;
                a = a->next;
            }
            else
            {
                node->next = new ListNode((0 + b->val + carry) % 10);
                carry = (0 + b->val + carry) / 10;
                b = b->next;
            }
            node = node->next;
        }
        if(carry)
            node->next = new ListNode(carry);
        return dummy->next;
    }
};
