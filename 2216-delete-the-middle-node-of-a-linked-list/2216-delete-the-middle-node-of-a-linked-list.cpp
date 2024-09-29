/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* left = head;
        ListNode* right = head;
        if(!head->next) return head->next;

        while(1){

            if(right->next && right->next->next) right = right->next->next;
            else {
                 cout<<left->val<<endl;
                if(left->next && left->next->next){
                    left->next = left->next->next;
                }
                else left->next = NULL;
                break;
            }
            if(right->next) left = left->next;
        }
       
        return head;
    }
};