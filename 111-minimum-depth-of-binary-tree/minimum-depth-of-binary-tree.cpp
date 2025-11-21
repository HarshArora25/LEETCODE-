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
    unsigned long long mini=INT_MAX;
    private:
    void btaobtao(TreeNode* root,int level){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL){
            if(level<mini)
            mini=level;
        }
        btaobtao(root->left,level+1);
        btaobtao(root->right,level+1);
    }
public:
    int minDepth(TreeNode* root) {
        if(root==NULL) return 0;
        int level=0;
        btaobtao(root,level);
        return mini+1;
    }
};