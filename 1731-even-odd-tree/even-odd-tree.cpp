/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
      queue<TreeNode*>qu;
      int prev=0;
      qu.push(root);
      bool x=true;
      while(!qu.empty()){
        int size=qu.size();
        if(x)
         prev=-1e9;
        else
        prev=1e9;
        for(int i=0;i<size;i++){
            TreeNode* fr=qu.front();
            qu.pop();
            if(x){
                if(fr->val%2==0  || fr->val <= prev)
                return false;
            }
            else{
                if( (fr->val)%2 !=0 || fr->val >= prev)
                return false;
            }
            if(fr->left) qu.push(fr->left);
            if(fr->right) qu.push(fr->right);
            prev=fr->val;
        }
        x=!x;
      }
      return true;
    }
};