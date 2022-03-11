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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return head;
        ListNode* curr = head;
        vector<ListNode*> v;
        
        //storing nodes values in a list
        while(curr){
            v.push_back(curr);
            curr = curr -> next;
        }
        
        int n = v.size();
        // updating the value of no of rotations i.e k
        k = k % n;
        // values after k movements
        int r = n - k;
        
        if( k == 0) 
            return head;
        
        ListNode* start = new ListNode(-1);
        ListNode* curr1 = start;
        
        //appending k elements from last in clockwise
        for(int i = n-k; i < n; i++) {
            ListNode* temp = v[i];
            curr1->next = new ListNode(temp->val);
            curr1 = curr1 -> next;
        }
         
        //appending the rest elements
        while(r>0) {
            curr1->next = new ListNode(head->val);
            head = head -> next;
            curr1 = curr1 -> next;
            r--;
        }
        
      return start->next;
   }
};