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
    ListNode* partition(ListNode* head, int x) {
       ListNode* head1=new ListNode(0);
       ListNode* head2=new ListNode(0);
       ListNode* xo=head1;
       ListNode* y=head2;
       while(head !=NULL){
            if(head->val <x){
                head1->next=new ListNode(head->val);
                head1=head1->next;
            }
            else{
                head2->next=new ListNode(head->val);
                head2=head2->next;
            }
            head=head->next;
       }
       head1->next=y->next;
       return xo->next;
    }
};