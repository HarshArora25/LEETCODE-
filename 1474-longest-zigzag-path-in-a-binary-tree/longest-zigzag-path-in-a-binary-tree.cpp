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
    int maxi=0;
public:
     void  help(TreeNode* root,int step,bool left,bool right){
        if(root==NULL){
            return ;
        }
        maxi=max(maxi,step);
        if(left){
            help(root->left,step+1,false,true);
            help(root->right,1,true,false);
        }
        else{
           help(root->right,step+1,true,false);
            help(root->left,1,false,true);  
        }
      }
public:
    int longestZigZag(TreeNode* root) {
      bool left=true,right=true;
      int step=0;
      help(root,step,left,right);  
      return maxi;
    }
};