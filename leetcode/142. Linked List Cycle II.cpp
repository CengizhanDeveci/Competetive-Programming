#include <iostream>
#include <unordered_set>

using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
    // with floyd cycle algorithm
    ListNode *detectCycle2(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                slow = head;
                while(slow != fast){
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow;
            }
        }
        return NULL;
    }

    // O(n) memory complexity
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode *> visited;
        if(!head) return NULL;
        while(head->next){
            if(visited.find(head) != visited.end()) return head;
            visited.insert(head);
            head = head->next;            
        }
        return NULL;
    }
};