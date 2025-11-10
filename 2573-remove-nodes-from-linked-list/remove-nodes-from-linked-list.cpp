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
    ListNode* reverses(ListNode* &head){
        ListNode* prev=NULL;
        ListNode* curr=head;
        while(curr){
            ListNode* nextnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextnode;
        }
        return prev;
    }
public:
    ListNode* removeNodes(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* head1=reverses(head);
         ListNode* l =head1;
         ListNode* s=head1->next;
         while(s){
           if(l->val>s->val){
            l->next=s->next;
           } 
           else{
            l=s;
           }
           s=s->next;
         }
         ListNode* head2=reverses(head1);
         return head2;
    }
};