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
    ListNode* removeElements(ListNode* head, int val) {
     ListNode* dummy = new ListNode(0);
     ListNode* current = dummy;

     while(head){
        if(head->val == val && !head->next){
            current->next = NULL;
        }
        if(head->val != val){
            current->next = head;
            current = current->next;
        }
        head = head->next;
     }

     return dummy->next;
    }
};