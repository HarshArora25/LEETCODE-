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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
       int count2=count-k;
       ListNode* a=head;
       ListNode* b=head;
       while(k-1){
          a=a->next;
          k--;
       }
       while(count2){
        b=b->next;
        count2--;
       }
       swap(a->val,b->val);
       return head;
    }
};