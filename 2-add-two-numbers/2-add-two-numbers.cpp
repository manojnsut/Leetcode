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
        int sum = 0 , carry = 0;
        
        while(l1 || l2 ) {
            
            if(l1) 
                sum += l1->val;
            if(l2) 
                sum += l2 ->val;
            
            curr3 -> next = new ListNode(sum % 10);
            
            carry = sum /10;
            sum = carry;
            
          
            if(l1)
                l1 = l1->next;
            if(l2) 
                l2 = l2->next;
            
              curr3 = curr3 -> next;
        }
        
        if(carry > 0)
            curr3 -> next = new ListNode(carry);
        
        return l3->next;    
    }
};