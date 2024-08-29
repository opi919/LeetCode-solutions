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
long int count = 0;
int i =0;
    void treverse(TreeNode* node,long int sum,int targetSum){
        if(node == NULL) return;
        i++;
        sum += node->val;
        if(sum == targetSum){
            cout<<node->val<<endl;
            count++;
        }
        treverse(node->left,sum,targetSum);
        treverse(node->right,sum,targetSum);
    }
    void treverseAll(TreeNode* root,int targetSum){
        if(!root) return;

        treverse(root,0,targetSum);

        treverseAll(root->left,targetSum);
        treverseAll(root->right,targetSum);
    }
    int pathSum(TreeNode* root, int targetSum) {
        treverseAll(root,targetSum);
    return count;
    }
};