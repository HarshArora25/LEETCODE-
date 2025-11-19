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
    int iscount(TreeNode* root ,int &count){
        if(root==NULL) return 0;
        return 1 + iscount(root->left,count) + iscount(root->right,count);
    }
    bool dfshkya(TreeNode* root,int i,int counti){
        if(root==NULL) return true;
        if(i>counti) return false;
        return dfshkya(root->left,2*i,counti) && dfshkya(root->right,2*i+1,counti);
    }
public:
    bool isCompleteTree(TreeNode* root) {
      //using DFS 
      int count=0;
      int counti=iscount(root,count);
      return dfshkya(root,1,counti); 
    }
};