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
         if(!head)
            return head;
        
        ListNode *curr = head;
        
        vector<int> v;
        while(curr) {
         v.push_back(curr->val);
         curr = curr -> next;
        } 
        
        vector<int> cnt(201,0);
        for(int i = 0; i <v.size();++i) {
            cnt[v[i]+100]++;
        }
        
       ListNode* prev = new ListNode(-1);
       ListNode * start = prev;
        
        for(int i = 0; i < 201; ++i) {
            if(cnt[i] > 0) {
                start->next = new ListNode(i-100);
                start = start->next;
            }
        }
        return prev->next;
    }
};