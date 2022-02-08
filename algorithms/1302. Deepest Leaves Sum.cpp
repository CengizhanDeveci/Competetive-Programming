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
    int deepestLeavesSum(TreeNode* root) {
        int level = findDeep(root);
        return helper(root, level);
    }
    int findDeep(TreeNode* node){
        if(!node) return 0;
        return 1 + max(findDeep(node->right), findDeep(node->left));
    }
    int helper(TreeNode* root, int level){
        if(!root) return 0;
        if(level == 1) return root->val;
        return helper(root->left, level - 1) + helper(root->right, level - 1);
    }
};