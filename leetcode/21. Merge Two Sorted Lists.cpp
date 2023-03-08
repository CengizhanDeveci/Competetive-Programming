struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* result;
        
        if(!l1){
            return l2;
        }else if(!l2){
            return l1;
        }
        
        if(l1->val < l2 ->val){
            result = l1;
            result->next = mergeTwoLists(l1->next,l2);
        }else{
            result = l2;
            result->next = mergeTwoLists(l1,l2->next);
        }
        return result;
        
    }
};