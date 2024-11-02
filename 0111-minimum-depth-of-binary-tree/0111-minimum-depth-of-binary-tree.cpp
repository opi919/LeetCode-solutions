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
        if(!root){
            return;
        }

        count++;
        if(!root->left && !root->right){
                        result = min(count,result);
                        return;
        }
        treverse(root->left,count,result);
        treverse(root->right,count,result);
    }
    int minDepth(TreeNode* root) {
        int result = INT_MAX;
        if(!root) return 0;
        treverse(root,0,result);

        return result;
    }
};