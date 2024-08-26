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
queue<int> q1;
queue<int> q2;
    void treversePostOrder(TreeNode* node1){
        if(node1 == NULL) return;

        treversePostOrder(node1->left);        
        treversePostOrder(node1->right);

        if(node1->left == NULL && node1->right == NULL)  q1.push(node1->val);     
    }

    void treversePostOrder2(TreeNode* node2){
        if(node2 == NULL) return;

        treversePostOrder2(node2->left);        
        treversePostOrder2(node2->right);

        if(node2->left == NULL && node2->right == NULL)  q2.push(node2->val);     
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        treversePostOrder(root1);
        treversePostOrder2(root2);

        cout<<q1.front()<<endl;
        cout<<q2.front()<<endl;
        while(1){
            if(q1.front() != q2.front()) return false;
            cout<<q1.front()<<endl;
            cout<<q2.front()<<endl;
            q1.pop();
            q2.pop();
            if(q1.empty() && q2.empty()) return true;
            if(q1.empty() || q2.empty()) return false;
        }
        return true;
    }
};