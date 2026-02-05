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
    TreeNode* help(TreeNode* root,int val){
        if(root==NULL) return NULL;
        if(val==root->val) return root;
        if(val>root->val){
           return help(root->right,val);
        }
        else
       return help(root->left,val);
    }
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        return help(root,val);
    }
};