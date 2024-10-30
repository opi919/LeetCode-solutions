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
bool treverse(TreeNode* p,TreeNode* q){
    if(!p && !q) return true;
    if(!p || !q) return false;

    if(p->val == q->val){
    bool left = treverse(p->left,q->left);
    bool right = treverse(p->right,q->right);

        return left && right;

    } else return false;

}
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool result = treverse(p,q);
        return result;
    }
};