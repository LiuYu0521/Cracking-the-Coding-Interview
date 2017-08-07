/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/
class Palindrome {
public:
    bool isPalindrome(ListNode* pHead) {
        // write code here
        stack<int> s;
        ListNode* slow = pHead;
        ListNode* fast = pHead;
        while(fast && fast->next)
        {
            s.push(slow->val);
            slow = slow->next;
            fast = fast->next->next;
        }
        if(fast)
            slow = slow->next;
        while(slow)
        {
            int temp = s.top();
            if(temp != slow->val)
                return false;
            s.pop();
            slow = slow->next;
        }
        return true;
    }
};
