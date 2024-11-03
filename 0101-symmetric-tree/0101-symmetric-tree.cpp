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
    bool isSame(TreeNode* headA,TreeNode* headB){
        if(!headA && !headB) return true;
        if(!headA || !headB) return false;

        if(headA->val == headB->val){
            bool left = isSame(headA->left,headB->right);
            bool right = isSame(headA->right,headB->left);

            return left && right;

        }else return false;
    }
    bool isSymmetric(TreeNode* root) {
        if(!root->left && !root->right) return true;
        bool result = isSame(root->left,root->right);
        return result;
    }
};