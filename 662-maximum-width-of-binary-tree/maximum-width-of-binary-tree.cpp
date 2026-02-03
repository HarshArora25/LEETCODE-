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
    int widthOfBinaryTree(TreeNode* root) {
      queue<pair<TreeNode*,long long>>qu;
      qu.push({root,0});
      int frst=0,last=0,maxi=-1e9;
      while(!qu.empty()){
        int mini=qu.front().second;
        int size=qu.size();
        for(int i=0;i<size;i++){
            TreeNode* node=qu.front().first;
            long long idx=qu.front().second-mini;
            qu.pop();
            if(i==0) frst=idx;
            if(i==size-1) last=idx;
            if(node->left) qu.push({node->left,2*idx+1});
            if(node->right) qu.push({node->right,2*idx+2});
            maxi=max(maxi,last-frst+1);
        }
      }
      return maxi;
    }
};