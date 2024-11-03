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
void treverse(TreeNode* root){
    if(!root) return;
    if(!root->left && !root->right) return;

    TreeNode* temp = root->left;
    root->left = root->right;
    root->right = temp;

    treverse(root->left);
    treverse(root->right);
}
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return NULL;

        treverse(root);

        return root;
    }
};