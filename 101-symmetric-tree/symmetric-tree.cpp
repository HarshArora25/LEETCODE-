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
    private:
    bool btaobtao(TreeNode* a,TreeNode* b){
         if(a==NULL && b==NULL) 
        return true;
        if(a==NULL || b==NULL)
        return false;
        if(a->val !=b->val)
        return false;
        return btaobtao(a->left,b->right) && btaobtao(a->right, b->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
      if(root==NULL) return NULL;
      TreeNode* a=root->left;
      TreeNode* b=root->right;
      return btaobtao(a,b); 
    }
};