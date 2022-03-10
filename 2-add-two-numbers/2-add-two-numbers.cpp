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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * l3 = new ListNode(-1);
        ListNode *curr3  = l3;
        int add_result = 0;
        
        while(l1 || l2 || add_result) {
            if(l1) add_result += l1->val;
            if(l2) add_result += l2 ->val;
            curr3 -> next = new ListNode(add_result % 10);
            add_result /=10;
            curr3 = curr3 -> next;
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }
        
        return l3->next;    
    }
};