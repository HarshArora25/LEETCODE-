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
    void inorder(TreeNode* root,vector<int>& z){
      if(!root) return;
      inorder(root->left,z);
      z.push_back(root->val);
      inorder(root->right,z);
    }
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>x,y,z;
        inorder(root1,x);
        inorder(root2,y);
        int i=0,j=0;
        while(i<x.size() && j<y.size()){
            if(x[i]<=y[j]){
             z.push_back(x[i]);
             i++;
            }
            else{
                z.push_back(y[j]);
                j++;
            }
        }
        while(i<x.size()){ z.push_back(x[i]); i++; }
        while(j<y.size()){ z.push_back(y[j]); j++; }
        return z;
    }
};