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
int leftHeight(TreeNode* root){
    int h = 0;
    while(root){
        h++;
        root = root->left;
    }
    return h;
}
int rightHeight(TreeNode* root){
    int h = 0;
    while(root){
        h++;
        root = root->right;
    }
    return h;
}
    int treverse(TreeNode* root){
            if(!root) return 0;

            int lefth = leftHeight(root);
            int righth = rightHeight(root);

            if(lefth == righth) return pow(2,lefth) - 1;

            return 1 + treverse(root->left) + treverse(root->right);
    }
    int countNodes(TreeNode* root) {
      int count =  treverse(root);

      return count;
    }
};