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