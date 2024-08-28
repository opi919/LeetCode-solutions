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
bool found = false;
int count = 0;
    void treverse(TreeNode* node,int sum,int targetSum){
        if(!node) return;
                sum += node->val;
        if(!node->left  && !node->right){
            cout<<sum<<endl;
            if(sum == targetSum) found = true;
            return;
        }
        if(node->left) treverse(node->left,sum,targetSum);   
        if(node->right) treverse(node->right,sum,targetSum);  
        // cout<<leftSum<<endl;
        // cout<<rightSum<<endl;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        treverse(root,0,targetSum);
        // cout<<sum<<endl;
        return found;
    }
};