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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* dummynode=new ListNode(0);
        dummynode->next=list1;
      ListNode* prev=dummynode;
      ListNode* curr=dummynode;
      while(a){
        prev=prev->next;
        a--;
      }
        while(b+2){
        curr=curr->next;
        b--;
      }
      ListNode* tail=list2;
      while(tail->next !=NULL){
       tail=tail->next;
      }
      prev->next=list2;
      tail->next=curr;
      return dummynode->next;
    }
};