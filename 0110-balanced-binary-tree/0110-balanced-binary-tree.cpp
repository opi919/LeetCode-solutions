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
int getHeight(TreeNode* root){
    if(!root) return 1;
    return 1 + max(getHeight(root->left),getHeight(root->right));
}
    bool treverse(TreeNode* root){
        if(!root) return true;

        int lefth = getHeight(root->left);
        int righth = getHeight(root->right);

        

        if(abs(lefth-righth)<=1 && treverse(root->left) && treverse(root->right)) return true;
        else return false;


    }
    bool isBalanced(TreeNode* root) {
        return treverse(root);
    }
};