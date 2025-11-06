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
    ListNode* removeZeroSumSublists(ListNode* head) {
      unordered_map<int,ListNode*>mpp;
      ListNode* dummy=new ListNode(0);
      int prefixsum=0;
      dummy->next=head;
      mpp[0]=dummy;
      while(head !=NULL){
        prefixsum+=head->val;
        if(mpp.find(prefixsum)!=mpp.end()){
            ListNode* start=mpp[prefixsum];
            ListNode* temp=start;
            int psum=prefixsum;
            while(temp !=head){
                temp=temp->next;
                psum=psum+temp->val;
                if(temp!=head)
                mpp.erase(psum);
            }
            start->next=temp->next;
        }
        else{
            mpp[prefixsum]=head;
        }
        head=head->next;
      }  
      return dummy->next;
    }
};