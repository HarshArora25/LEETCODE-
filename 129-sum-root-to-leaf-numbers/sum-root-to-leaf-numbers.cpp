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
        void btaobtao(TreeNode* root,string& x,int &y){
            if(root==NULL) return;
             x=x+to_string(root->val);
            if(root->left==NULL && root->right==NULL){
               y+=stoi(x);
            }
            btaobtao(root->left,x,y);
            btaobtao(root->right,x,y);
            x.pop_back();
        }
public:
    int sumNumbers(TreeNode* root) {
        string x="";
        int y=0;
        btaobtao(root,x,y);
        return y;
    }
};