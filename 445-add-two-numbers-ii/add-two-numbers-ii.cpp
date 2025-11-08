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
   ListNode* reverse(ListNode* curr) {
        ListNode* prev = NULL;
        while(curr !=NULL){
            ListNode* newnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=newnode;
        }
        return prev;
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    l1=reverse(l1);
    l2=reverse(l2);   
     int carry=0,sum=0;
     ListNode* ans=new ListNode();
     while(l1 !=NULL || l2!=NULL){
        if(l1 !=NULL){
            sum+=l1->val;
            l1=l1->next;
        }
        if(l2 !=NULL){
            sum+=l2->val;
            l2=l2->next;
        }
        ans->val=sum%10;
        carry=sum/10;
        ListNode* newnode=new ListNode(carry);
        newnode->next=ans;
        ans=newnode;
        sum=carry;
     }
     if(carry==0) return ans->next;
     else
     return ans;
    }
};