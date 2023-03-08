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
    ListNode* middleNode(ListNode* head) {
        ListNode* mid = head, *end = head;
        int i = 0;
        while(end->next){
            end = end -> next;
            if(i){
                i++;
            }else{
                i--;
                mid = mid->next;
            }
        }
        return mid;
    }
};