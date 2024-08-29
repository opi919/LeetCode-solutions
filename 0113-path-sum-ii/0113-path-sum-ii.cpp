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
    vector<vector<int>> ans;
    void treverse(TreeNode* node,int sum,int targetSum,vector<int>vc){
        if(!node) return;
        sum += node->val;
        vc.push_back(node->val);
        if(!node->left  && !node->right){
            // cout<<sum<<endl;
            if(sum == targetSum){
                // for(int i=0;i<vc.size();i++){
                //     cout<<vc[i]<<endl;
                // }
                ans.push_back(vc);
                return;
            }
            return;
        }
        if(node->left) treverse(node->left,sum,targetSum,vc);   
        if(node->right) treverse(node->right,sum,targetSum,vc); 
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>vc;
        treverse(root,0,targetSum,vc);
        return ans;
    }
};