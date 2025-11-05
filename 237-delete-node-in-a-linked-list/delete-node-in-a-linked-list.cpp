/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
      ListNode* prev=node;
      ListNode* curr;
      while(prev->next){
        prev->val=prev->next->val;
        curr=prev;
        prev=prev->next;
      }
      curr->next=NULL;
    }
};