/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSame(TreeNode* branchLeft, TreeNode* branchRight){
        if(!branchLeft && !branchRight){
            return true;
        }else if(!branchLeft){
            return false;
        }else if(!branchRight){
            return false;
        }
        
        if(branchLeft->val != branchRight->val){
            return false;
        }
        
        return (isSame(branchLeft->left,branchRight->right) && isSame(branchLeft->right,branchRight->left));
    }
    
    bool isSymmetric(TreeNode* root) {
        return isSame(root->left,root->right);
    }
    
};