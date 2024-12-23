/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* treverse(TreeNode* root, TreeNode* p, TreeNode* q){
        if(!root) return NULL;

        if(root->val == p->val || root->val == q->val) return root;

        // cout<<root->val<<endl;

        TreeNode* left = treverse(root->left,p,q);
        TreeNode* right = treverse(root->right,p,q);

        if(left && right) return root;
        else{
            if(left) return left;
            else return right;
        }
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
       return treverse(root,p,q);
    }
};