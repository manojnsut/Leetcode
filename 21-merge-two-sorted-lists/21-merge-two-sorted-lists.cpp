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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode;
        ListNode *start = new ListNode(-1);
        head = start; 
        
        // compare two lists values and put the smaller value in new list
        while(l1 && l2){
            if(l1->val > l2->val) {
                start ->next = l2;
                l2 = l2->next;
            } else {
                start ->next = l1;
                l1 = l1->next;
            }
            start = start->next;
        }
        
        // if putting all the rest elements of lists
        while(l1) {
            start ->next = l1;
            l1 = l1->next;
            start = start->next;
        }
        while(l2) {
            start -> next = l2;
            l2 = l2->next;
            start = start->next;
        }
        
        return  head->next;
    }
};