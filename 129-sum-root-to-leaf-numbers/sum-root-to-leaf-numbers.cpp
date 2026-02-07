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
    int sum=0;
    public:
    void help(TreeNode* root, string& s){
        if(root==NULL){
            return ;
        }
        s+=to_string(root->val);
        help(root->left,s);
        help(root->right,s);
         if(root->left==NULL && root->right==NULL){
            sum+=stoi(s);
        }
        s.pop_back();

    }
    int sumNumbers(TreeNode* root) {
        string s;
        help(root,s);
        return sum;
    }
};