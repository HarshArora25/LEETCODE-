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
    private:
    ListNode* reversed(ListNode* &slow){
        ListNode* prev=NULL;
        ListNode* curr=slow;
        while(curr){
            ListNode* newnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=newnode;
        }
        return prev;
        }
public:
    void reorderList(ListNode* head) {
      ListNode* slow=head;
      ListNode* fast=head;
      while(fast !=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
      }
    //   if(fast !=NULL) slow=slow->next;
      ListNode* sec=slow->next;
      slow->next=NULL;
      ListNode* rev=reversed(sec);
      ListNode* temp=head;
      while(rev !=NULL){
        ListNode* x=temp->next;
        temp->next=rev;
        ListNode* y=rev->next;
        rev->next=x;
        temp=x;
        rev=y;
      }
    }
};