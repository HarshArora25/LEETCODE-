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
    TreeNode* count(vector<int>& preorder,int low,int high,int& index){
     if(preorder.size()==index || low>preorder[index] || high<preorder[index])
     return NULL;
     TreeNode* root=new TreeNode(preorder[index++]);
     root->left=count(preorder,low,root->val,index);
     root->right=count(preorder,root->val,high,index);
     return root;
    }
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
       int low=INT_MIN;
       int high= INT_MAX;
       int index=0;
       return count(preorder,low,high,index);
    }
};