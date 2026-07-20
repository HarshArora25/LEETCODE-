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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      int count=0;
      ListNode* temp=head; 
      while(temp !=NULL){
        temp=temp->next;
        count++;
      }  
      int pos=count-n;
      if (pos==0) return head->next;
      temp=head;
      ListNode* prev=temp;
      while(pos--){
        prev=temp;
        temp=temp->next;
      }
      prev->next=temp->next;
      temp->next=NULL;
      return head;
    }
};