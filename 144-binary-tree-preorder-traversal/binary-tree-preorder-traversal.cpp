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
    vector<int> preorderTraversal(TreeNode* root) {
    if(root==NULL) return {};
    stack<TreeNode*>st;
    vector<int>result;
    st.push(root);
    while(!st.empty()){
     TreeNode* elem=st.top();
     st.pop();
     if(elem->right) st.push(elem->right);
     if(elem->left) st.push(elem->left);
     result.push_back(elem->val);
    }    
    return result;
    }
};