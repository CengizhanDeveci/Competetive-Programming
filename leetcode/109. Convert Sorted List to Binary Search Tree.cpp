#include <iostream>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* helper(ListNode* start, ListNode* end)
    {
        if(start == end) return nullptr;

        ListNode* slow = start;
        ListNode* fast = start;
        while(fast != end && fast->next != end)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        
        TreeNode* newNode = new TreeNode(slow->val, helper(start, slow), helper(slow->next, end));
        return newNode;
    }

    TreeNode* sortedListToBST(ListNode* head) 
    {
        if(!head) return nullptr;
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast->next && fast->next->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        TreeNode* newNode = new TreeNode(slow->val, helper(head, slow), helper(slow->next, nullptr));
        return newNode;        
    }
};