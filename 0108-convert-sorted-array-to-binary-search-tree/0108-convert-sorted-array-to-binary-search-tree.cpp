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
    
    TreeNode* balanceTree(vector<int>& nums,int start,int end){
        if(start>end) return NULL;

        int mid = (end+start) / 2;
        TreeNode* result = new TreeNode(nums[mid]);

        result->left = balanceTree(nums,start,mid-1);
        result->right = balanceTree(nums,mid+1,end);

        return result;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return balanceTree(nums,0,nums.size()-1);
    }
};