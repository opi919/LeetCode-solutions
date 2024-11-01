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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(-200);
        ListNode* current = dummy;

        if(!head || !head->next ) return head;

        while(head){
            if(!head->next) current->next = NULL;
            if(current->val != head->val){
                current->next = head;
                current = current->next;
            }

            head = head->next;
        }   

        return dummy->next;
    }
};