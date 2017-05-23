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
        if(a == nullptr && b == nullptr)
            return nullptr;
        int carry = 0;
        ListNode* plus = nullptr;
        ListNode* temp_a = a;
        ListNode* temp_b = b;
        ListNode* temp_plus = plus;
        while(temp_a != nullptr || temp_b != nullptr)
        {
            if(temp_a != nullptr)
            {
                carry = carry + temp_a->val;
                temp_a = temp_a->next;
            }
            if(temp_b != nullptr)
            {
                carry = carry + temp_b->val;
                temp_b = temp_b->next;
            }
            if(plus == nullptr)
            {
                plus = new ListNode(0);
                temp_plus = plus;
                plus->val = carry % 10;
                carry = carry / 10;
            }
            else
            {
                temp_plus->next = new ListNode(0);
                temp_plus = temp_plus->next;
                temp_plus->val = carry % 10;
                carry = carry / 10;
            }
        }
        if(carry != 0)
        {
            temp_plus->next = new ListNode(0);
            temp_plus = temp_plus->next;
            temp_plus->val = carry % 10;
        }
        return plus;
    }
};
