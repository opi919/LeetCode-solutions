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
    bool treverse(TreeNode* root, TreeNode* subRoot){
        if(!root && !subRoot) return true;
        if(!root || !subRoot) return false;

        if(root->val == subRoot->val){
            return treverse(root->left,subRoot->left) && treverse(root->right,subRoot->right);
        }else return false;
    }
    bool find(TreeNode* root, TreeNode* subRoot){
        if(!root) return false;

        if(root->val == subRoot->val){
            return treverse(root,subRoot) || find(root->left,subRoot) || find(root->right,subRoot);
        }

        return find(root->left,subRoot) || find(root->right,subRoot);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        return find(root,subRoot);
    }
};