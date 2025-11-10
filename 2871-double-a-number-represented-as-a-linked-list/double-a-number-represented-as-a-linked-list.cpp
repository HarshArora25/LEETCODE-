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
    ListNode* doubleIt(ListNode* head) {
    ListNode* head1=reverses(head);
    int carry=0;
    int sum=0;
    ListNode* temp=head1;
    ListNode* dummy=new ListNode(0);
    dummy->next=head1;
    ListNode* prev=temp;
    while(temp){
      sum=temp->val*2+carry;
      temp->val=sum%10;
      carry=sum/10;
      prev=temp;
      temp=temp->next;
    }
    if(carry>0){
        prev->next=new ListNode(sum/10);
    }
    ListNode* headd=reverses(dummy->next);
    return headd;
    }
};