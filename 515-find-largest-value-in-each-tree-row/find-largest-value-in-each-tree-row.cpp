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
void btaobtao(queue<TreeNode*>&qu,TreeNode* root,vector<int>&x){
    qu.push(root);
    while(!qu.empty()){
        int size=qu.size();
          int maxi=INT_MIN;
    while(size--){
        TreeNode* curr=qu.front();
        qu.pop();
        if(curr->val>maxi){
            maxi=curr->val;
         }
         if(curr->left) qu.push(curr->left);
         if(curr->right) qu.push(curr->right);
    }
     x.push_back(maxi);
    }
}
public:
    vector<int> largestValues(TreeNode* root) {
     queue<TreeNode*>qu;
     vector<int>x;
     if(root==NULL) return x;
     btaobtao(qu,root,x); 
     return x;  
    }
};