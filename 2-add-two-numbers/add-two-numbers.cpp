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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummynode=new ListNode(-1);
        ListNode* head=dummynode;
        ListNode* curr1=l1;
        ListNode* curr2=l2;
        int carry=0,sum=0;
        while(curr1 && curr2){
            int sum=curr1->val+curr2->val+carry;
            int val=sum %10;
            head->next=new ListNode(val);
            carry=sum/10;
            head=head->next;
            curr1=curr1->next;
            curr2=curr2->next;
        }
        while(curr1){
            sum=curr1->val+carry;
            head->next=new ListNode(sum%10);
            carry=sum/10;
            head=head->next;
            curr1=curr1->next;
        }
         while(curr2){
            sum=curr2->val+carry;
            head->next=new ListNode(sum%10);
            carry=sum/10;
            head=head->next;
            curr2=curr2->next;
        }
        while(carry){
            head->next=new ListNode(carry%10);
            carry=carry/10;
            head=head->next;
        }
        return dummynode->next;
    }
};