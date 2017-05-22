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
    	if(k<=0) return nullptr;
    	ListNode* p1=pListHead;
    	ListNode* p2=pListHead;
    	for(int i=0;i<k-1;i++)
    	{
    		if(p2==nullptr)
    		{
    			return nullptr;
			}
			p2=p2->next;
		}
		if(p2==nullptr) return nullptr;
		while(p2->next!=nullptr)
		{
			p1=p1->next;
			p2=p2->next;
		}
    	return p1;
    }
};
