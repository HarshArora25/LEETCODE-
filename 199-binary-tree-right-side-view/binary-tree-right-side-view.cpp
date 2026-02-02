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
    vector<int> rightSideView(TreeNode* root) {
        if(root == NULL) return {};
      queue<TreeNode*>qu;
      qu.push(root);
      vector<int>res;
      while(!qu.empty()){
        int size=qu.size();
        vector<int>x;
        for(int i=0;i<size;i++){
              TreeNode* temp=qu.front();
              qu.pop();
              if(temp->left) qu.push(temp->left);
              if(temp->right) qu.push(temp->right);
              x.push_back(temp->val);
        }
        res.push_back(x[size-1]);
      }  
      return res;
    }
};