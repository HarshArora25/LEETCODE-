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
    bool help( TreeNode* root,long long mini,long long maxi){
        if(root==NULL) return true;
        if(root->val>=maxi || root->val<=mini)
        return false;
       return help(root->left,mini,root->val) && help(root->right,root->val,maxi);
    }
public:
    bool isValidBST(TreeNode* root) {
        long long  mini=1e9,maxi=-1e9;
      return help(root,LLONG_MIN, LLONG_MAX);  
    }
};