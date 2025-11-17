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
        vector<int>x;
        if(root==NULL) return x;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int sizee=q.size();
           int lst=0;
        for(int i=0;i<sizee;i++){
            TreeNode* temp=q.front();
            q.pop();
            lst=temp->val;
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        x.push_back(lst);
        }
        return x;
    }
};