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
int current = 1;
int Max = 0;
    void treverse(TreeNode* node,int current,int count){
        if(!node) return;
        int next = current == 1 ? 2 : 1;

        if(current == 1 && node->right){
            count++;
            treverse(node->right,next,count);
        }
        else if(current == 2 && node->left){
            count++;
            treverse(node->left,next,count);
        }
        else{
            Max = max(Max,count);
        }
    }
    void treverseAll(TreeNode* root){
        if(!root) return;
        treverse(root,1,0);
        treverse(root,2,0);

        treverseAll(root->left);
        treverseAll(root->right);
    }
    int longestZigZag(TreeNode* root) {
        treverseAll(root);
        return Max;
    }
};