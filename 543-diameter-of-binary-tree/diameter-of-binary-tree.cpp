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
    int checksum(TreeNode* root,int& maxi){
        if(root==NULL) return 0;
        int lefty=checksum(root->left,maxi);
        int ryty=checksum(root->right,maxi);
        maxi=max(maxi,lefty+ryty);
        return 1+max(lefty,ryty);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi=0;
     checksum(root,maxi);   
     return maxi;
    }
};