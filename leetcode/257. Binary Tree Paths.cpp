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
    vector<string> res;
    vector<string> binaryTreePaths(TreeNode* root, string y = "") {
        if(!root){
            return res;
        }
        if(!(root->left) && !(root->right)){
            (y == "") ? res.push_back(to_string(root->val)) :  res.push_back(y + "->" + to_string(root->val));
            return res;
        }
        if(y == ""){
            binaryTreePaths(root->left, to_string(root->val));
            binaryTreePaths(root->right, to_string(root->val));
        }else{
            binaryTreePaths(root->left, y + "->" + to_string(root->val));
            binaryTreePaths(root->right, y + "->" + to_string(root->val));
        }
       
        return res;
    }
};