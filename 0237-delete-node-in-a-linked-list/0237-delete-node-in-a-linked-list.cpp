/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp = node;

        temp->val=temp->next->val;
        temp->next=temp->next->next;

        // while(temp){
        //     if(temp->next == NULL) break;
        //                 cout<<temp->val<<" "<<temp->next->val<<endl;
        //     temp->val = temp->next->val;
        //     temp->next = temp->next->next;
        //     temp = temp->next;
        // }
    }
};