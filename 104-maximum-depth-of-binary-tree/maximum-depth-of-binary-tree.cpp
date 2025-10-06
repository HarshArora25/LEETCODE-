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
    int maximum(int height,TreeNode* root,int& maxi){
        if(root==NULL) return 0;
        maxi=max(maxi,height);
        if(root->left)   maximum(height+1,root->left,maxi);
        if(root->right)  maximum(height+1,root->right,maxi);
        return maxi;
    }
public:
    int maxDepth(TreeNode* root) {
        int height=1;
        int maxi=INT_MIN;
        return maximum(height,root,maxi);

    }
};