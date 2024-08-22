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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* odd = head;
        ListNode* node = new ListNode();
        ListNode* result = node;
        if(!odd) return head;
        ListNode* even = head->next;
        while(odd){
            node->val = odd->val;
            cout<<odd->val<<endl;
            if(odd->next == NULL) break;
            if(odd->next->next == NULL) break;
            odd = odd->next->next;
            node->next = new ListNode();
            node = node->next;
        }
        if(!even) return node;
        else {
            node->next = new ListNode();
            node = node->next;
        }
        while(even){
            node->val = even->val;
            cout<<even->val<<endl;
            if(even->next == NULL) break;
            if(even->next->next == NULL) break;
            even = even->next->next;
            node->next = new ListNode();
            node = node->next;
        }
        return result;
    }
};