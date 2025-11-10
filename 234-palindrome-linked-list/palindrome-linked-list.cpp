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
    ListNode*  reversell(ListNode* &head1){
        ListNode* prev=NULL;
        ListNode *curr=head1;
        while(curr !=NULL){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
    ListNode* dummy=new ListNode(head->val); 
    ListNode* head1=dummy;
    ListNode* temp=head->next;
    while(temp !=NULL){
        ListNode* newnode=new ListNode(temp->val);
        dummy->next=newnode;
        dummy=newnode;
        temp=temp->next;
    }
    ListNode* head2=reversell(head1);
    while(head2 !=NULL || head !=NULL){
        if(head->val != head2->val) return false;
        else{
            head=head->next;
            head2=head2->next;
        }
    }
    return true;
    }
};