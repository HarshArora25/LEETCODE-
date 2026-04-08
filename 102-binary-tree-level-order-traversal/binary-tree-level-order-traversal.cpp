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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL) return { };
      queue<TreeNode*>qu;
      qu.push(root);
      vector<vector<int>>res;
      while(!qu.empty()){
        vector<int>x;
        int size=qu.size();
        while(size--){
           TreeNode* temp=qu.front();
           if(temp->left) qu.push(temp->left);
           if(temp->right) qu.push(temp->right);
           x.push_back(temp->val);
           qu.pop();
        }
        res.push_back(x);
      }  
      return res;
    }
};