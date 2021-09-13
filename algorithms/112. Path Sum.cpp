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
    bool hasPathSum(TreeNode* root, int targetSum, int cur = 0) {
        
        if(root){
            cur += root->val;
            if(!root->right && !root->left){
                return (targetSum == cur) ? true : false;
            }else{
                return hasPathSum(root->left,targetSum,cur) || hasPathSum(root->right,targetSum,cur);
            }
        }
        return false;
        
    }
};