#include <iostream>

using namespace std;

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

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode();
        ListNode* tracker = result;
        int remaining = 0;
        while(l1 != NULL || l2 != NULL){
            tracker->next = new ListNode();
            tracker = tracker->next;
            int value = 0;
            if(l1) {value += l1->val;l1 = l1->next;}
            if(l2) {value += l2->val;l2 = l2->next;}
            value += remaining;
            if(value > 9){
                remaining = 1;
                value -= 10;
            }else remaining = 0;
            
            tracker->val = value;
            
            
        }
        if(remaining) tracker->next = new ListNode(1);

        return result->next;
    }
};