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
    void countkrbae(TreeNode* root,vector<int>&z){
        if(root==NULL) return ;
        if(root->left==NULL && root->right==NULL){
            z.push_back(root->val);
        }
        countkrbae(root->left,z);
        countkrbae(root->right,z);
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
     vector<int>x,y;
    countkrbae(root1,x);
    countkrbae(root2,y);
    return x==y;

    }
};