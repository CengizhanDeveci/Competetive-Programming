/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* first = head, *second = head, *tracker = head;
        while(n-- > 1) second = second ->next;
        while(second->next){
            tracker = first;
            first = first -> next;
            second = second -> next;
        }
        if(first == head) return head->next;
        tracker -> next = first ->next;
        return head;
    }
};