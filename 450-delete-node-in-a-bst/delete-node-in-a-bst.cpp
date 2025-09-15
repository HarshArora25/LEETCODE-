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
    TreeNode* deleteNode(TreeNode* root, int target ){
       if(!root) return NULL;
       if(root->val>target){
       root->left=deleteNode(root->left,target);
       return root;
       }  
       else if(root->val<target){
        root->right=deleteNode(root->right,target);
        return root;
       }
       else{
        // leaf Node k liye
        if(root->left==NULL && root->right==NULL){
          delete root;
          return NULL;
       }
       // 1 child node h left wala
       else if(!root->left){
        TreeNode* temp=root->right;
        delete root;
        return temp;
       }
       // 1 child node h ryt wala
       else if(!root->right){
        TreeNode* temp=root->left;
        delete root;
        return temp;
       }
       //2 child 
       TreeNode*child=root->left;
       TreeNode*parent=root;
       while(child->right){
        parent=child;
        child=child->right;
       }
        if(parent !=root){
       parent->right=child->left;
       child->right=root->right;
       child->left=root->left;
       delete root;
       return child;
       }
       else{
        child->right=root->right;
        delete root;
        return child;
       }
       }

    }
};