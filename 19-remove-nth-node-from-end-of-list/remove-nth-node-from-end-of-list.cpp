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
        if(head==NULL) return head;
        ListNode* dummynode=new ListNode(0);
        dummynode->next=head;
        ListNode*prev= dummynode,*curr=dummynode,*temp=dummynode;
        int count=0;
        while(temp->next){
            count++;
            temp=temp->next;
        }
        // count--;
        if(count==0 || count==1) return NULL;
        int x=count-n;
        while(x+1){
            prev=curr;
            curr=curr->next;
            x--;
        }
        if(prev->next)
        prev->next=curr->next;
        else
        prev->next=NULL;
        return dummynode->next;
    }
};