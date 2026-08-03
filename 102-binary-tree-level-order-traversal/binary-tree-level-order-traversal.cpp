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
        if(root == NULL)
    return {};
      queue<TreeNode*>qu;
      vector<vector<int>>result;
      qu.push(root);
      while(!qu.empty()){
        int size=qu.size();
        vector<int>ans;
        while(size--){
         TreeNode* elem=qu.front();
         qu.pop();
         if(elem->left) qu.push(elem->left);
         if(elem->right) qu.push(elem->right);
         ans.push_back(elem->val);
        }
        result.push_back(ans);
      }
      return result;
    }
};