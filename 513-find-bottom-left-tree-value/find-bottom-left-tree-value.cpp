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
    int findBottomLeftValue(TreeNode* root) {
        if(root==NULL) return -1;
        queue<TreeNode*>qu;
        int x=root->val;
        qu.push(root);
        while(!qu.empty()){
        int size=qu.size();
         x=qu.front()->val;
        for(int i=0;i<size;i++){
            TreeNode* frr=qu.front();
            qu.pop();
           if(frr->left){
             qu.push(frr->left);
           }
           if(frr->right){
             qu.push(frr->right);
           }
        }
       } 
        return x;
    }
};