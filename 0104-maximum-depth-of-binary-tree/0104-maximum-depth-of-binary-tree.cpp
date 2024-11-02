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
    void treverse(TreeNode* root,int count,int &result){
        if(!root) {
            result = max(result,count);
            return;
        }

        count++;
        treverse(root->left,count,result);
        treverse(root->right,count,result);
    }
    int maxDepth(TreeNode* root) {
        int result = 0;
        treverse(root,0,result);

        return result;
    }
};