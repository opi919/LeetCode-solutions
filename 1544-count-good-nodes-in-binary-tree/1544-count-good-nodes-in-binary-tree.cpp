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
    int count = 0;
    int max = -1000000;
    void treverse(TreeNode* node,int max){
        if(node == NULL) return;

        if(node->val >= max){
            max = node->val;
            count++;
        }
        treverse(node->left,max);
        treverse(node->right,max);
    }
    int goodNodes(TreeNode* root) {
        treverse(root,max);
        return count;
    }
};