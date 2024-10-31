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
    bool isPalindrome(ListNode* head) {
        string str,str2;
        while(head){
            str+=head->val;
            head = head->next;
        }
str2 = str;
        reverse(str.begin(),str.end());

        if(str == str2) return true;
        else return false;
    }
};