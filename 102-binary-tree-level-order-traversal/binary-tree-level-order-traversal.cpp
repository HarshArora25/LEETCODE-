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
        if(root==NULL) return {};
        vector<vector<int>>result;
        queue<TreeNode*>qu;
        qu.push(root);
        while(!qu.empty()){
            int sz=qu.size();
            vector<int>res;
        for(int i=0;i<sz;i++){
         TreeNode* x=qu.front();
         qu.pop();
         res.push_back(x->val);
         if(x->left !=nullptr) qu.push(x->left);
         if(x->right !=nullptr) qu.push(x->right);
        }
        result.push_back(res);
        }
        return result;
    }
};