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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>postorde;
        if(root==NULL) return postorde;
        stack<TreeNode*>st1,st2;
        st1.push(root);
        while(!st1.empty()){
            TreeNode* temp=st1.top();
            if(!st1.empty()){ 
            st2.push(st1.top());
            st1.pop();
            }
            if(temp->left) st1.push(temp->left);
            if(temp->right) st1.push(temp->right);
        }
        while(!st2.empty()){
            postorde.push_back(st2.top()->val);
            st2.pop();
        }
        return postorde;
    }
};