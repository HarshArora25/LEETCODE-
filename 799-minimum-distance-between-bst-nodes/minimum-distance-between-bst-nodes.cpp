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
    int minim(vector<int> x,int& diff){
        int mini=diff;
        for(int i=1;i<x.size();i++){
            int diff=x[i]-x[i-1];
            mini=min(mini,diff);
        }
        return mini;
    }
    void inorder(TreeNode* root,vector<int>& x){
        if(root==NULL) return;
        inorder(root->left,x);
        x.push_back(root->val);
        inorder(root->right,x);
    }
public:
    int minDiffInBST(TreeNode* root) {
      vector<int>x;
      inorder(root,x); 
      int diff=INT_MAX;
      return minim(x,diff); 
    }
};