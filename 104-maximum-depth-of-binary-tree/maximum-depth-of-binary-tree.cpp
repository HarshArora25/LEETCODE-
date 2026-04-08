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
    int hiit(TreeNode* root){
        if(root==NULL) return 0;
        int lefty=hiit(root->left);
        int ryty=hiit(root->right);
        return 1+max(lefty,ryty);
    }
public:
    int maxDepth(TreeNode* root) {
       return hiit(root);
    }
};