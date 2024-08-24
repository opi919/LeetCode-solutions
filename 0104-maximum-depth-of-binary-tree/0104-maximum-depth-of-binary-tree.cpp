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
int treverse(TreeNode* node,int count){
    if(node == NULL) return count;
    count++;
    int left = treverse(node->left,count);
    int right = treverse(node->right,count);

    return max(left,right);
}
    int maxDepth(TreeNode* root) {
        int count = 0;
        int ans = treverse(root,count);
        return ans;
    }
};