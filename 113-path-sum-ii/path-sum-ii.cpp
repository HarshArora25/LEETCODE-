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
    void btaobtao(TreeNode* root,int &targetSum, vector<vector<int>>&x,vector<int>&y,int sum){
        if(root==NULL) return ;
        y.push_back(root->val);
        sum+=root->val;
        if(sum==targetSum && root->left==NULL && root->right==NULL){
            x.push_back(y);
        }
        btaobtao(root->left,targetSum,x,y,sum);
        btaobtao(root->right,targetSum,x,y,sum);
        y.pop_back();
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
       vector<vector<int>>x;
       vector<int>y;
       btaobtao(root,targetSum,x,y,0); 
       return x;
    }
};