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
    ListNode* reverseList(ListNode* head) {
        if(!head) return head;
        ListNode* newHead = head;
        ListNode* temp = head;
        stack<int> st;

        while(head){
            st.push(head->val);
            head = head->next;
        }

        while(temp){
            int top = st.top();
            st.pop();
            temp->val = top;
            temp = temp->next;
        }

        return newHead;
    }
};