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
     void  help(TreeNode* root,int left,int right){
        if(root==NULL){
            return ;
        }
        maxi=max(maxi,max(left,right));
       help(root->left,right+1,0);
       help(root->right,0,left+1);
     }
public:
    int longestZigZag(TreeNode* root) {
      int left=0,right=0;
    //   int step=0;
      help(root,left,right);  
      return maxi;
    }
};