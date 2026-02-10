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
    string maxi="";
public:
      void strin(TreeNode* root,string curr){
        if(root==NULL) return ;
        curr=char(root->val+'a')+curr;
        if(root->left==NULL && root->right==NULL){
        if(maxi>curr || maxi==""){
            maxi=curr;
        }
        return ;
        }
        strin(root->left,curr);
        strin(root->right,curr);
      }
public:
    string smallestFromLeaf(TreeNode* root) {
        string curr="";
        strin(root,curr);
        return maxi;
    }
};