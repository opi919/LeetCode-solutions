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
    long calculate(TreeNode* root, int low, int high,long &sum){
        if(!root) return sum;

        if(root->val>=low && root->val<=high) sum+=root->val;

        long left = calculate(root->left,low,high,sum);
        long right = calculate(root->right,low,high,sum);

        return sum;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        long sum = 0;
        return calculate(root,low,high,sum);
    }
};