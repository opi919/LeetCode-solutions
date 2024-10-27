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
bool treverse(TreeNode* root,long min,long max){
    if(!root) return true;
    if(root->val<=min || root->val>=max) return false;
    return treverse(root->left,min,root->val) && treverse(root->right,root->val,max);
}
    bool isValidBST(TreeNode* root) {
       bool result =  treverse(root,LONG_MIN,LONG_MAX);
       return result;
    }
};