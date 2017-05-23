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
        stack<int> st;
        ListNode* slow = pHead;
        ListNode* fast = pHead;
        while(fast != nullptr && fast->next != nullptr)
        {
            st.push(slow->val);
            slow = slow->next;
            fast = fast->next->next;
        }
        if(fast != nullptr)
        {
            slow = slow->next;
        }
        while(slow != nullptr)
        {
            int top = st.top();
            if(top != slow->val)
            {
                return false;
            }
            st.pop();
            slow = slow->next;
        }
        return true;
    }
};
