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
    bool treverse(TreeNode* root,int sum,int targetSum){
        if(!root){
            return false;
        }

        sum+=root->val;
        if(!root->left && !root->right){
            cout<<sum<<endl;
            if(targetSum == sum) return true;
            else return false;
        }

        return treverse(root->left,sum,targetSum) || treverse(root->right,sum,targetSum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;

       bool result = treverse(root,0,targetSum); 

       return result;
    }
};