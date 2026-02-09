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
    int count=0;
    vector<int>mpp=vector<int>(10,0);
private:
    void help(TreeNode* root){
        if(root==NULL) return ;
        mpp[root->val]++;
        if(root->left==NULL && root->right==NULL){
          int odd=0;
          for(int i=1;i<=9;i++){
            if(mpp[i]%2==1)
            odd++;
          }
            if(odd<=1)
            count++; 
        }
        help(root->left);
        help(root->right);
        mpp[root->val]--;
    }
public:
    int pseudoPalindromicPaths (TreeNode* root) {
       help(root);
       return count; 
    }
};