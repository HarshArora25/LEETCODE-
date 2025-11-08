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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* curr=head;
        int l=0;
        while(curr !=NULL){
            l++;
            curr=curr->next;
        }
        int tot=l/k;
        int rem=l%k;
        ListNode* prev=NULL;
        curr=head;
         vector<ListNode*>result(k,NULL);
        for(int i=0; curr!=NULL&&i<k;i++){
            result[i]=curr;
            for(int j=1;j<=tot+(rem>0?1:0);j++){
                prev=curr;
                curr=curr->next;
            }
             rem--;
            prev->next=NULL;
        }
       return result; 
    }
};