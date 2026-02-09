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
    int count=0;
public:
    int help(TreeNode* root){
        if(root==NULL) return 0;
        int lefty=help(root->left);
        int righty=help(root->right);
        count+=abs(lefty)+abs(righty);
        return root->val+lefty + righty - 1;
    }
public:
    int distributeCoins(TreeNode* root) {
        help(root);
        return count;
    }
};